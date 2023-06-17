/*

Given an integer array 'nums', and an integer 'k', return the length of the longest increasing
subsequence starting at the kth index.

A subsequence is a sequence that can be derived from an array by deleting some or no elements
without changing the order of the remaining elements.

Example 1:
	Input: nums[] = [10, 9, 2, 5, 1, 7], k = 2
	Output: 3
	Explanation: The longest increasing subsequence starting at 2nd index is [2, 5, 7],
	             therefore the output is 3.

Example 2:
	Input: nums[] = [0, 1, 0, 3, 2, 3], k = 1
	Output: 3
	Explanation: The longest increasing subsequence starting at the 0th index is [1, 2, 3],
	             therefore the output is 3.
*/


#include<iostream>
#include<vector>
#include<climits>

using namespace std;

vector<int> out;
vector<int> lis;

int LIS_K(vector<int> A, int n, int i) {

	// base case

	if (i == n - 1) {
		// compute the length of the LIS of A[n-1...n-1]
		if (lis.size() > out.size()) {
			out = lis;
		}
		// for (int x : lis) cout << x << " ";
		// cout << endl;
		return 1;
	}

	// recursive case

	// compute the length of the LIS of A[i...n-1]

	int ans = INT_MIN;
	for (int j = i + 1; j <= n - 1; j++) {
		if (A[j] >= A[i]) {
			lis.push_back(A[j]);
			ans = max(ans, LIS_K(A, n, j));
			lis.pop_back();
		}
	}

	return ans == INT_MIN ? 1 : 1 + ans;

}

// time : O(n^2)

int LIS_K_BottomUp(vector<int> A, int n, int k) {

	vector<int> dp(n);

	dp[n - 1] = 1;

	for (int i = n - 2; i >= k; i--) {

		int ans = INT_MIN;
		for (int j = i + 1; j <= n - 1; j++) {
			if (A[j] >= A[i]) {
				ans = max(ans, dp[j]);
			}
		}

		dp[i] = ans == INT_MIN ? 1 : 1 + ans;

	}

	return dp[k];

}

int main() {

	vector<int> A = {0, 2, 5, 3, 0, 4, 6};
	int n = A.size();
	int k = 1;

	lis.push_back(A[k]);

	// cout << LIS_K(A, n, k) << endl;

	// for (int x : out) cout << x << " ";
	// cout << endl;

	cout << LIS_K_BottomUp(A, n, k) << endl;

	return 0;
}