#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b, c;
	double d, x1, x2;

	cout << "a*x*x+b*x+c=0. Enter a,b,c: ";
	cin >> a >> b >> c;
	cout << "a=" << a << " b=" << b << " c=" << c << "\n";

	if (a == 0.0) {
		cout << "KORNEI NET !\n";
		return 2;
	}

	d = b*b - 4 * a*c;
	cout << "d=" << d << "\n";
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "x1=" << x1 << " x2=" << x2 << "\n";
	}
	else if (d == 0.0) {
		x1 = (-b / (2 * a)); x2 = x1;
		cout << "x=" << x1 << "\n";
	}
	else {
		cout << "KORNEI NET!\n";
	}
	system("pause");
	return 0;
}