/*

Given an integer array 'nums', return the length of the longest increasing subsequence.

A subsequence is a sequence that can be derived from an array by deleting some or no elements without
changing the order of the remaining elements.

Example 1:
	Input: nums[] = [10, 9, 2, 5, 3, 7, 18]
	Output: 4
	Explanation: The longest increasing subsequence is [2, 5, 7, 18], therefore the output is 4.

Example 2:
	Input: nums[] = [0,1,0,3,2,3]
	Output: 4
	Explanation: The longest increasing subsequence is [0, 1, 2, 3], therefore the output is 4.
*/


#include<iostream>
#include<vector>
#include<climits>

using namespace std;


int LIS_K(vector<int> A, int n, int i) {

	// base case

	if (i == n - 1) {
		// compute the length of the LIS of A[n-1...n-1]
		return 1;
	}

	// recursive case

	// compute the length of the LIS of A[i...n-1]

	int ans = INT_MIN;
	for (int j = i + 1; j <= n - 1; j++) {
		if (A[j] >= A[i]) {
			ans = max(ans, LIS_K(A, n, j));
		}
	}

	return ans == INT_MIN ? 1 : 1 + ans;

}


int LIS(vector<int> A, int n) {
	int ans = INT_MIN;
	for (int k = 0; k < n; k++) {
		ans = max(ans, LIS_K(A, n, k));
	}
	return ans;
}

// time : O(n^2)

int LIS_BottomUp(vector<int> A, int n) {

	vector<int> dp(n);

	dp[n - 1] = 1;
	int finalAns = dp[n - 1];

	for (int i = n - 2; i >= 0; i--) {

		int ans = INT_MIN;
		for (int j = i + 1; j <= n - 1; j++) {
			if (A[j] >= A[i]) {
				ans = max(ans, dp[j]);
			}
		}

		dp[i] = ans == INT_MIN ? 1 : 1 + ans;
		finalAns = max(finalAns, dp[i]);

	}

	return finalAns;

}


int main() {

	vector<int> A = {1, 2, 5, 3, 0, 4, 6};
	int n = A.size();

	cout << LIS(A, n) << endl;
	cout << LIS_BottomUp(A, n) << endl;

	return 0;
}