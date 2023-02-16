#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);

	int* ptr = arr;

	for(int i=0; i<n; i++) {
		cout << &arr[i] << " " << (arr+i) << " " << arr[i] << " " << *(arr+i) << " " << *(ptr+i) << " " << ptr[i] << endl;
	}

	ptr++;
	arr++; // error, you cannot update name of the array to point to any other address except arr[0]

	cout << *ptr << endl;


	return 0;
}