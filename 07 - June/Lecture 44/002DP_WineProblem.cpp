/*

Given n wines in a row, with integers denoting the cost of each wine respectively. Each year
you can sell the first or the last wine in the row. However, the price of wines increases
over time.

Let the initial prices of the wines be [p_1, p_2, ... , p_n]. In the yth year, the profit
from the kth wine will be y*p_k.

Find the maximum profit from all the wines.

Example :
	Input : prices[] = {2, 3, 5, 1, 4}
	Ouptut: 50

*/

#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int> prices, int i, int j, int y) {

	// base case
	if (i == j) {
		return prices[i] * y;
	}

	// recursive case

	// decide for the yth year

	// 1. sell the ith bottle
	int x = maxProfit(prices, i + 1, j, y + 1);

	// 2. sell the jth bottle
	int z = maxProfit(prices, i, j - 1, y + 1);

	return max(prices[i] * y + x, prices[j] * y + z);

}

// time : O(n^2) space : O(n^2)

int maxProfit(vector<int> prices, int n) {

	vector<vector<int>> dp(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		// dp[i][i] = prices[i] * n;
		int j = i;
		int y = n;
		dp[i][j] = prices[i] * y;
	}

	for (int i = n - 2; i >= 0; i--) {
		for (int j = i + 1; j < n; j++) {
			int y = n - (j - i);
			dp[i][j] = max(prices[i] * y + dp[i + 1][j],  prices[j] * y + dp[i][j - 1]);
		}
	}

	return dp[0][n - 1];

}

int main() {

	vector<int> prices = {2, 3, 5, 1, 4};
	int n = prices.size();
	cout << maxProfit(prices, 0, n - 1, 1) << endl;

	cout << maxProfit(prices, n) << endl;

	return 0;
}