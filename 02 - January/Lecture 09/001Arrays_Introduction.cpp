#include<iostream>

using namespace std;

int main() {

	int arr[5];

	cout << sizeof(arr) << "B" << endl;
	cout << sizeof(arr) / sizeof(int) << endl;

	char brr[10];

	cout << sizeof(brr) << "B" << endl;
	cout << sizeof(brr) / sizeof(char) << endl;

	double crr[20];

	cout << sizeof(crr) << "B" << endl;
	cout << sizeof(crr) / sizeof(double) << endl;

	return 0;
}