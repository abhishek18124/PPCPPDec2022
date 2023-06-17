#include<iostream>
#include<vector>

using namespace std;

int countPalindromicPartitioning(string str, int i) {

	// base case

	if (i == n - 1) {
		// count the number of palindromic partitioning of str[n-1...n-1]
		return 1;
	}

	// recursive case

	// count the number of palindromic partitioning of str[i...n-1]

	// todo ...

}

int main() {

	string str = "abaca";

	cout << countPalindromicPartitioning(str, 0) << endl;

	return 0;
}