#include<iostream>

using namespace std;

int binarySearch(int* arr, int t, int s, int e) {

	// base case
	if(s > e) {
		// search space has become empty
		return -1;
	}

	// recursive case

	int m = s+(e-s)/2;
	
	if(arr[m] == t) {
		// 't' found at index 'm'
		return m;
	} else if(t > arr[m]) {
		// ask your friend to search for the 't' in arr[m+1...e]
		return binarySearch(arr, t, m+1, e);
	}

	// t < arr[m]

	// ask your friend to search for the 't' in arr[s...m-1]
	return binarySearch(arr, t, s, m-1);

}

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);
	int t = 60;

	cout << binarySearch(arr, t, 0, n-1)  << endl;

	return 0;
}