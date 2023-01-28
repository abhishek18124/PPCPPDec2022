// constraints : n <= 100

#include<iostream>
#include<climits>

using namespace std;

int main() {

	// approach 1 - n + n^2 ~ O(n^2) time ; O(n) space

	int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(int);

	int csum[101];
	csum[0] = 0;
	for(int i=1; i<=n; i++) {
		csum[i] = csum[i-1]+arr[i-1];
	}

	int lsf = INT_MIN; // track the largest subarray sum so far

	// iterate over all the possible starting indices
	for(int i=0; i<n; i++) {
		// iterate over all the possible ending indices
		for(int j=i; j<n; j++) {
			// compute the sum of the subarray that starts at i and ends at j
			int sum_ij = csum[j+1]-csum[i];
			if(sum_ij > lsf) {
				lsf = sum_ij;
			}
		}
	}

	cout << lsf << endl;


	return 0;
}