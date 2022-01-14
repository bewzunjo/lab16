#include <iostream>
using namespace std;

int main(){
int a = 5;
char b  = 'A';
char &c = b;
int *x = &a;
char *y = &b;
int *z = x;


	cout << a << ' ';
	cout << b << ' ';
	cout << c << ' ';
	cout << x << ' ';
	cout << (void *)y << ' ';
	cout << z << "\n";
	
	cout << &a << ' ';
	cout << (void *)&b << ' ';
	cout << (void *)&c << ' ';
	cout << &x << ' ';
	cout << &y << ' ';
	cout << &z << "\n";
	
	c = 'F';
	cout << a << ' ';
	cout << b << ' ';
	cout << c << ' ';
	cout << &x << ' ';
	cout << &y << ' ';
	cout << &z << "\n";

	*y = 'W';
	cout << a << ' ';
	cout << b << ' ';
	cout << c << ' ';
	cout << &x << ' ';
	cout << &y << ' ';
	cout << &z << "\n";

	*x = 6;
	cout << a << ' ';
	cout << b << ' ';
	cout << c << ' ';
	cout << &x << ' ';
	cout << &y << ' ';
	cout << &z << "\n";

	
	*z = 7;
	cout << a << ' ';
	cout << b << ' ';
	cout << c << ' ';
	cout << &x << ' ';
	cout << &y << ' ';
	cout << &z << "\n";

	
	
	return 0;
}
