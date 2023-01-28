#include<iostream>
#include<climits>

using namespace std;

int main() {

	// approach 1 - O(n^3) time ; O(1) space


	int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(int);

	int lsf = INT_MIN; // track the largest subarray sum so far

	// iterate over all the possible starting indices
	for(int i=0; i<n; i++) {
		// iterate over all the possible ending indices
		for(int j=i; j<n; j++) {
			// compute the sum of the subarray that starts at i and ends at j
			int sum_ij = 0;
			for(int k=i; k<=j; k++) {
				sum_ij += arr[k];
			}
			if(sum_ij > lsf) {
				lsf = sum_ij;
			}
		}
	}

	cout << lsf << endl;


	return 0;
}