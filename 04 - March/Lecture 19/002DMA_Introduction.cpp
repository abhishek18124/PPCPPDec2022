#include<iostream>

using namespace std;

int main() {

	int* ptr = new int;

	*ptr = 10;

	cout << *ptr << endl;
	cout << ptr << endl;

	delete ptr; // to avoid memory leak

	ptr = new int;

	*ptr = 20;
	cout << *ptr << endl;
	cout << ptr << endl;

	delete ptr; // to avoid memory leak

	return 0;
}