// contraints : n <= 100, k <= 9

#include<iostream>

using namespace std;

int main() {	

	int arr[] = {1, 0, 3, 2, 3, 1, 2, 0, 2};
	int n = sizeof(arr) / sizeof(int);
	
	int k = 3; // denotes the maximum element in the array

	int count[10] = {};
	// memset(count, 0, sizeof(count));

	for(int i=0; i<n; i++) {
		// int x = arr[i];
		// count[x]++;

		count[arr[i]]++;
	}

	// for(int i=0; i<=k; i++) {
	// 	cout << i << " : " << count[i] << endl;
	// }

	int brr[100];

	// // approach - 1 n+n i.e. O(n) time, O(n+k) space

	// int i=0;
	// for(int j=0; j<=k; j++) {
	// 	int l = count[j]; // count of 'j' in arr[]
	// 	while(l) {
	// 		brr[i] = j;
	// 		i++;
	// 		l--;
	// 	}
	// }

	for(int i=1; i<=k; i++) {
		count[i] += count[i-1];
	}

	// for(int i=0; i<=k; i++) {
	// 	cout << count[i] << " ";
	// }

	// cout << endl;

	for(int i=k; i>=1; i--) {
		count[i] = count[i-1];
	}

	count[0] = 0;

	// for(int i=0; i<=k; i++) {
	// 	cout << count[i] << " ";
	// }

	for(int i=0; i<n; i++) {
		// int x = arr[i];
		// int y = count[x];
		// brr[y] = x;
		// count[x]++;

		brr[count[arr[i]]++] = arr[i];

	}

	for(int i=0; i<n; i++) {
		cout << brr[i] << " ";
	}


	cout << endl;


	return 0;
}