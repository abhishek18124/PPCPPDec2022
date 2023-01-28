// constraints : n <= 100

#include<iostream>

using namespace std;

// // approach - O(n) time and O(n) space

// int kadanes(int arr[], int n) {

// 	int x[100];
// 	x[0] = arr[0];

// 	int lsf = x[0];

// 	for(int i=1; i<n; i++) {
// 		x[i] = max(x[i-1]+arr[i], arr[i]);
// 		lsf = max(lsf, x[i]);
// 	}

// 	return lsf;

// }

// approach - O(n) time and O(1) space

int kadanes_space_efficient(int arr[], int n) {

	int x = arr[0];

	int lsf = x;

	for(int i=1; i<n; i++) {
		x = max(x+arr[i], arr[i]);
		lsf = max(lsf, x);
	}

	return lsf;

}


int main() {

	int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(int);

	// cout << kadanes(arr, n) << endl;
	cout << kadanes_space_efficient(arr, n) << endl;

	return 0;
}