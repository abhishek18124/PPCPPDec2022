#include<iostream>

using namespace std;

int main() {

	int arr[] = {50, 40, 30, 20, 10};
	int n = sizeof(arr) / sizeof(int);

	// iterate over the n-1 passes
	for(int i=1; i<=n-1; i++) {

		// in the ith pass, we have to place the largest element
		// in the unsorted part of the array to its correct pos.

		bool flag = false; // assume no swap will be done in the ith pass

		for(int j=0; j<n-i; j++) {
			if(arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
				flag = true;
			}
		}

		if(flag == false) {
			// my assumption that no swaps will be done in the ith pass is correct
			break;
		}

	}
	
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	
	return 0;
}