#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int A = 1;
	double B = 6.5;
	cout << "�������� A= " << A;
	cout << "������ A= " << &A << endl;
	cout << " �������� B=" << B;
	cout << " ������ B=" << &B << endl;
	system("pause");
	return 0;
	


}