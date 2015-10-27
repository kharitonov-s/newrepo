#include <iostream>
#include <ctime> 

using namespace std;

int main()
{
	int n, m, q, i, j,z;
	setlocale(LC_CTYPE, "rus");
	cout << "Введите кол-во столбцов в первой матрице ";
	cin >> n;
	cout << "Введите кол-во строк в первой матрице ";
	cin >> m;
	cout << "Введите кол-во столбцов во второй матрице ";
	cin >> q;
	cout << "Введите кол-во строк второй матрицы ";
	cin >> z;
	int **mat1 = new int *[m];
	for (i = 0; i < m; i++)
		mat1[i] = new int[n];
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			mat1[i][j] = rand() % 9 + 1;
		}
	}
	cout << "Первая" << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cout <<  mat1[i][j]<<" ";
		cout << endl;
	}
	int **mat2 = new int *[z];
	for (i = 0; i < z; i++)
		mat2[i] = new int[q];
	for (i = 0; i < z; i++)
	{
		for (j = 0; j < q; j++)
		{
			mat2[i][j] = rand() % 9 + 1;
		}
	}
	cout << "Вторая" << endl;
	for (i = 0; i < z; i++)
	{
		for (j = 0; j < q; j++)
			cout <<  mat2[i][j]<< " ";
		cout << endl;
	}	
	if (n != z)
	{
		cout << "Строки не равны столбцам" << endl;
	}
	else
	{
		int **mat3 = new int *[i];
		for (i = 0; i < m; i++)
			mat3[i] = new int[j];
		for (i = 0; i < m; i++)
			for (j = 0; j < q; j++)
			{
				mat3[i][j] = 0;
				for (int k = 0; k < q; k++)
					mat3[i][j] += (mat1[i][k] * mat2[k][j]);
			}
		cout << "Результат умножения:" << endl;
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
				cout << mat3[i][j]<<" ";
			cout << endl;
		}
	}	
	system("pause");
	return 0;
}