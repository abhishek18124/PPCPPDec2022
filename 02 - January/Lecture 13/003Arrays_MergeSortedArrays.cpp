// contraints : m <= 10, n <= 10

#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 30, 50, 70};
	int brr[] = {20, 40, 60};

	int n = sizeof(arr) / sizeof(int);
	int m = sizeof(brr) / sizeof(int);

	int crr[20];

	// time : O(m+n) space : O(m+n)

	int i = 0; // to iterate over arr
	int j = 0; // to iterate over brr
	int k = 0; // to iterate over crr

	while(i < n and j < m) {

		if(arr[i] < brr[j]) {
			crr[k] = arr[i];
			i++;
			k++;
		} else {
			crr[k] = brr[j];
			j++;
			k++;
		}
	}

	while(i < n) {

		crr[k] = arr[i];
		i++;
		k++;

	}

	while(j < m) {

		crr[k] = brr[j];
		j++;
		k++;
	}

	for(int l=0; l<n+m; l++) {
		cout << crr[l] << " ";
	}

	cout << endl;

	return 0;
}

