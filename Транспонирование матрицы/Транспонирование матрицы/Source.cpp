#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;


int main()
{
	int n;
	cout << "vvedite kol-vo strok, stolbcov" << endl;
	cin >> n;
	srand(time(NULL));
	double**mat = new double*[n];
	for (int i = 0;i < n;++i)
	{
		mat[i] = new double[n];
		for (int j = 0;j < n;++j)
		{
			mat[i][j] = rand() % 9 + 1;
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	int f = 0;
	for (int k = 0 ;k < n;++k)
	{
		for (int i = f ;i < n;++i)
		{
			for (int j = i;j < n;++j)
			{
				if (i == j)
				{
					continue;
				}
				mat[i][j] = mat[i][j] + mat[j][i];
				mat[j][i] = mat[i][j] - mat[j][i];
				mat[i][j] = mat[i][j] - mat[j][i];
			}
		}
	}
	for (int i = 0;i < n;++i)
		{
			for (int j = 0;j < n;++j)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		delete[] mat;
		system("pause");
		return 0;
	}
