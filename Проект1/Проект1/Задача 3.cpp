#include <iostream>
#include <cmath>
using namespace std;
int main()
{ int a, b;
 
	cout << "введите А и В" << endl;
cin >> a >> b;
a = a + b;
b = a - b;
a = a - b;
cout << "A: " << a << " B: " << b << endl;
system("pause");
return 0;}
