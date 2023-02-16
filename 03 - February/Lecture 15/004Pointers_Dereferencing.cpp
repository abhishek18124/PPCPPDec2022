#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int *xptr = &x;
	
	cout << "x = " << x << endl;
	cout << "sizeof(x) = " << sizeof(x) << endl;
	cout << "xptr = " << xptr << endl;
	cout << "sizeof(xptr) = " << sizeof(xptr) << endl;
	cout << "*xptr = " << *xptr << endl;

	int y = 520;
	char* chptr = (char*)&y;
	cout << "*chptr = " << (int)*chptr << endl;
	
	return 0;
}