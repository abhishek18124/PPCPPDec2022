#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);

	int k = 3;

	k = k%n;

	// // approach works in O(n.k) time

	// for(int j=0; j<k; j++) {

	// 	int temp = arr[n-1];

	// 	// shift all the elements in arr[0...n-2] = {10...60} one step to the right

	// 	for(int i=n-1; i>=1; i--) {
	// 		arr[i] = arr[i-1];
	// 	}

	// 	arr[0] = temp;

	// }


	// approach 2 - n + k + (n-k) i.e. 2n ~ O(n) time 
	//               O(1) space
	
	// 1. reverse the entire array

	int i = 0;
	int j = n-1;

	while(i < j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}

	// 2. reverse the first k elements

	i = 0;
	j = k-1;

	while(i < j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}

	// 3. reverse the last n-k elements

	i = k;
	j = n-1;

	while(i < j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}