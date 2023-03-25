// constraints : n <= 100

#include<iostream>

using namespace std;

void merge(int* arr, int s, int m, int e) {

	int brr[100]; // based on the constraint

	int i = s;
	int j = m+1;
	int k = s;

	while(i <= m and j <= e) {
		if(arr[i] < arr[j]) {
			brr[k] = arr[i];
			i++;
			k++;
		} else {
			brr[k] = arr[j];
			j++;
			k++;
		}
	}

	while(i <= m) {
		// arr[m+1...e] is exhausted
		brr[k] = arr[i];
		i++;
		k++;
	}

	while(j <= e) {
		// arr[s...m] is exhausted
		brr[k] = arr[j];
		j++;
		k++;
	}

	for(int l=s; l<=e; l++) {
		arr[l] = brr[l];
	}

}


void mergeSort(int* arr, int s, int e) {

	// base case
	if(s == e) {
		// sort arr[s..e] = arr[s..s] = {arr[s]} -> array of size 1 is already sorted
		return;
	}

	// recursive case

	// sort arr[s...e]

	// 1. divide the arr[s...e] around the midPoint

	int m = s+(e-s)/2;

	// 2. recursively sort two subarrays - arr[s...m] and arr[m+1...e]

	mergeSort(arr, s, m);
	mergeSort(arr, m+1, e);

	// 3. merge the two sorted subarray - arr[s...m] and arr[m+1...e] such that the entire array is sorted
	merge(arr, s, m, e);

}

int main() {

	int arr[] = {50, 40, 30, 20, 10};
	int n = sizeof(arr) / sizeof(int);

	mergeSort(arr, 0, n-1);
	
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}