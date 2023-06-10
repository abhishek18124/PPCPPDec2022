/*

Given an array of non-negative integers, find the maximum subarray XOR.

Example:
	Input : x[] = {25, 10, 2, 8, 5, 3}
	Output:
	n <= 100
*/

#include<iostream>
#include<climits>

using namespace std;

class node {
public:

	node* left;  // indicates if node has a child that represents bit 0
	node* right; // indicates if node has a child that represents bit 1

	node() {
		this->left = NULL;
		this->right = NULL;
	}
};

class trie {

	node* root;

public:

	trie() {
		root = new node();
	}

	void insert(int n) {
		node* temp = root;
		for (int i = 31; i >= 0; i--) {
			int bit = (1 << i)&n;
			if (!bit) {
				// ith bit of n is 0, check if temp node has a left child or not
				if (!temp->left) {
					node* n = new node();
					temp->left = n;
				}
				temp = temp->left;
			} else {
				// ith bit of n is 1, check if temp node has a right child or not
				if (!temp->right) {
					node* n = new node();
					temp->right = n;
				}
				temp = temp->right;
			}
		}
	}

	int helper(int n) {
		int XOR = 0;
		node* cur = root;
		for (int i = 31; i >= 0; i--) {

			int ith_bit = (n >> i) & 1;
			if (ith_bit == 0) {
				if (cur->right != NULL) {
					// ith bit of XOR will be set
					XOR += (1 << i);
					cur = cur->right;
				} else {
					cur = cur->left;
				}
			} else {
				if (cur->left != NULL) {
					//ith bit of XOR will be set
					XOR += (1 << i);
					cur = cur->left;
				} else {
					cur = cur->right;
				}
			}

		}

		cout << n << "^" << (n ^ XOR) << " = " << XOR << endl;

		return XOR;
	}

	int maximumXOR(int* x, int n) {
		int out = 0;
		for (int i = 0; i < n; i++) {
			out = max(out, helper(x[i]));
		}
		return out;
	}
};

int main() {

	int arr[] = {25, 10, 2, 8, 5, 3};
	int n = sizeof(arr) / sizeof(int);

	// brute-force approach - time : O(n^3) space : O(1)

	// int maxXOR = 0; // to track the maximum subarray XOR

	// for (int i = 0; i < n; i++) {
	// 	for (int j = i; j < n; j++) {
	// 		// compute the xor of arr[i...j]
	// 		int XOR = 0;
	// 		for (int k = i; k <= j; k++) {
	// 			XOR ^= arr[k];
	// 		}
	// 		maxXOR = max(maxXOR, XOR);
	// 	}
	// }

	// cout << maxXOR << endl;

	int cXOR[101];
	cXOR[0] = 0;
	for (int i = 1; i <= n; i++) {
		cXOR[i] = cXOR[i - 1] ^ arr[i - 1];
	}

	trie t;
	for (int i = 0; i <= n; i++) {
		t.insert(cXOR[i]);
	}

	cout << t.maximumXOR(cXOR, n + 1) << endl;

	return 0;
}