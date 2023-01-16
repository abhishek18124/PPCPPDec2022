#include<iostream>

using namespace std;

int main() {

	int arr[100];

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	// 1. read values into the array

	// cin >> arr[0];
	// cin >> arr[1];
	// cin >> arr[2];
	// cin >> arr[3];
	// cin >> arr[4];
	// ...

	for(int i=0; i<n; i++) { // <=n-1
		cin >> arr[i];
	}

	// 2. print the values in the array
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	// 3. print the values in the array in reverse
	for(int i=n-1; i>=0; i--) {
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}