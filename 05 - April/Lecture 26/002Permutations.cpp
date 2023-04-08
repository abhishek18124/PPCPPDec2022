/*

Given a string (sequence of characters) of length n, generate all of its permutations. 

Example
	
	Input : inp[] = "abc"
	Output: ["abc", "acb", "bac", "bca", "cba", "cab"]

*/

#include<iostream>

using namespace std;

void generatePermutation(char* inp, int i) {

	// base case
	if(inp[i] == '\0') { // i == n
		cout << inp << endl;
		return;
	}
 
	// recursive case

	// generate perm. of inp[i...n-1] or take a seq. of n-i decision

	// take a decision for the ith position

	int n = strlen(inp);
	for(int j=i; j<n; j++) {
		// assign the char. present at the jth index to the ith position
		swap(inp[i], inp[j]);
		generatePermutation(inp, i+1);
		swap(inp[i], inp[j]); // backtracking-step
	}

}

int main() {

	char inp[] = "abc";

	generatePermutation(inp, 0);

	return 0;
}
