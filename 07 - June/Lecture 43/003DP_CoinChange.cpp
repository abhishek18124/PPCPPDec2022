/*

You are given an integer array coins representing coins of different denominations
and an integer amount representing a total amount of money.Return the fewest number
of coins that you need to make up that amount.

You may assume that you have an infinite number of each kind of coin.

Don't forget to handle the case if that amount of money cannot be made up by any
combination of the coins.

Example 1:

	Input: coins = [1,2,5], amount = 11
	Output: 3

	Input: coins = [3, 6], amount = 13
	Output: -

*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> config;

int minCoins(int n, vector<int>& c) {

	// base case
	if (n == 0) {
		// count min. no. of coins required to reduce 0 to 0
		for (int coin : config) {
			cout << coin << " ";
		}
		cout << endl;
		return 0;
	}

	// recursive case

	// count min. no. of coins required to reduce n to 0

	// decide the next coin

	int ans = INT_MAX;
	int k = c.size();
	for (int j = 0; j < k; j++) {
		if (n - c[j] >= 0) {
			config.push_back(c[j]);
			ans = min(ans, minCoins(n - c[j], c));
			config.pop_back();
		}
	}

	return ans == INT_MAX ? INT_MAX : 1 + ans;

}


int minCoinsTopDown(int n, vector<int>& c, vector<int>& dp) {

	// lookup
	if (dp[n] != -1) {
		return dp[n];
	}

	// base case
	if (n == 0) {
		// count min. no. of coins required to reduce 0 to 0
		return dp[n] = 0;
	}

	// recursive case

	// count min. no. of coins required to reduce n to 0

	// decide the next coin

	int ans = INT_MAX;
	int k = c.size();
	for (int j = 0; j < k; j++) {
		if (n - c[j] >= 0) {
			ans = min(ans, minCoinsTopDown(n - c[j], c, dp));
		}
	}

	return dp[n] = 1 + ans;

}

int minCoinsBottomUp(int n, vector<int> c) {

	vector<int> dp(n + 1);
	int k = c.size();

	dp[0] = 0; // dp[0] = f(0) = min. coins required to reduce 0 to 0

	for (int i = 1; i <= n; i++) {

		int ans = INT_MAX;
		for (int j = 0; j < k; j++) {
			if (i - c[j] >= 0) {
				ans = min(ans, dp[i - c[j]]);
			}
		}

		dp[i] = ans == INT_MAX ?  INT_MAX : 1 + ans;

	}

	return dp[n]; // dp[n] = f(n) = min. coins required to reduce n to 0

}
int main() {

	int n = 11;
	vector<int> c = {10};

	int res = minCoins(n, c);
	if (res == INT_MAX) {
		cout << " no config exists" << endl;
	} else {
		cout << res << endl;
	}

	vector<int> dp(n + 1, -1);

	cout << minCoinsTopDown(n, c, dp) << endl;

	cout << minCoinsBottomUp(n, c) << endl;

	return 0;
}