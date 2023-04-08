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

		bool flag = true; // assume jth char. can be placed at the ith position
		for(int k=j+1; k<n; k++) {
			if(inp[k] == inp[j]) {
				flag = false;
				break;
			}
		}

		if(flag == true) {
			swap(inp[i], inp[j]);
			generatePermutation(inp, i+1);
			swap(inp[i], inp[j]); // backtracking-step
		}
	}

}


int main() {

	char inp[] = "aabc";

	generatePermutation(inp, 0);

	return 0;
}
