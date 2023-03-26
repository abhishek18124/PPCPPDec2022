// constraints : n <= 100

#include<iostream>

using namespace std;

int partition(int* arr, int s, int e) {

	int pivot = arr[e];
	int j = s;
	int i = s-1;
	while(j < e) {
		if(arr[j] < pivot) {
			// jth element should be in the left partition
			i++;
			swap(arr[i], arr[j]);
		}
		j++;
	}

	swap(arr[i+1], arr[e]);
	return i+1;

}

void quickSort(int* arr, int s, int e) {

	// base case
	if(s >= e) {
		// sort arr[s...e] i.e. sort arr[s...s] = {arr[s]}
		return;
	}

	// recursive case

	// sort arr[s...e] using the quickSort algorithm

	int p_idx = partition(arr, s, e);

	// 2. recursively quickSort arr[s...p_idx-1] and arr[p_idx+1...e]

	quickSort(arr, s, p_idx-1);
	quickSort(arr, p_idx+1, e);

}

int main() {

	int arr[] = {60, 50, 20, 10, 40, 30};
	int n = sizeof(arr) / sizeof(int);

	quickSort(arr, 0, n-1);
	
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}