#include<iostream>

using namespace std;

int main() {

	int x = 10;

	int* xptr; // pointer declaration
	xptr = &x; // pointer assignment
	
	cout << "x = " << x << endl;
	cout << "sizeof(x) = " << sizeof(x) << endl;
	cout << "&x = " << &x << endl;
	cout << "xptr = " << xptr << endl;
	cout << "sizeof(xptr) = " << sizeof(xptr) << "B" << endl;

	cout << endl;

	double y = 3.14;

	double* dptr; // pointer declaration
	dptr = &y;   // pointer assignment
	
	cout << "y = " << y << endl;
	cout << "sizeof(y) = " << sizeof(y) << endl;
	cout << "&y = " << &y << endl;
	cout << "dptr = " << dptr << endl;
	cout << "sizeof(dptr) = " << sizeof(dptr) << "B" << endl;

	cout << endl;

	char ch = 'B';

	char* chptr = &ch; // pointer initialisation
	
	cout << "ch = " << ch << endl;
	cout << "sizeof(ch) = " << sizeof(ch) << endl;
	cout << "&ch = " << &ch << endl;
	cout << "chptr = " << chptr << endl;
	cout << "sizeof(chptr) = " << sizeof(chptr) << "B" << endl;

	cout << endl;
	
	return 0;
}