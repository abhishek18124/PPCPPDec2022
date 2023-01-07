#include<iostream>

using namespace std;

int main() {

	int x = 10;

	x++; // or ++x

	cout << "x : " << x << endl;

	int y = 20;

	y--; // or --y

	cout << "y : " << y << endl;

	int w = 10;

	cout << w++ << endl;
	cout << ++w << endl;

	int z = 100;

	cout << z-- << endl;
	cout << --z << endl;

	int a = 50;

	int b = a--;

	int c = a++;

	int d = ++a;

	int e = a--;

	cout << a << " " << b << " " << c << " " << d << " " << e << endl;

	
	return 0;
}