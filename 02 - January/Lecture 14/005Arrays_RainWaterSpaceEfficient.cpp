#include<iostream>

using namespace std;

int main() {

	// time : O(N) space : O(1)

	int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n = sizeof(h) / sizeof(int);

	int i = 0;
	int j = n-1;

	int total = 0;

	int l = INT_MIN; // max. of heights of buildings in the range [0, i]
	int r = INT_MIN; // max. of heights of buildings in the range [j, n-1]

	while(i <= j) {
		l = max(l, h[i]);
		r = max(r, h[j]);
		if(l <= r) {
			// compute the amount of rainwater trapped on top of the ith building
			int w_i = l-h[i];
			total += w_i;
			i++;
		} else {
			// compute the amount of rainwater trapped on top of the jth building
			int w_j = r-h[j];
			total += w_j;
			j--;
		}

	}

	cout << total << endl;

	return 0;
}