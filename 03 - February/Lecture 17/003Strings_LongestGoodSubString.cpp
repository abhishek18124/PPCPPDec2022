#include<iostream>
#include<algorithm>

using namespace std;

bool isGoodString(string str) {	
	for(int i=0; str[i] != '\0'; i++) {
		char ch = str[i];
		if(!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
			// ch is consonant, not a vowel
			return false;
		}
	}

	return true;
}

int main() {

	string str = "cbaeicdeiou";
	int n = str.size();

	int max_len = 0; // to track the length of the longest good subString
	
	// approach - O(N^3)

	// // iterate over starting indices
	// for(int i=0; i<n; i++) {
	// 	// iterate over ending indices for each substring that starts at the ith index
	// 	for(int j=i; j<n; j++) {
	// 		// extract the substring that starts at the ith index and ends at the jth index
	// 		string subString = str.substr(i, j-i+1);
	// 		if(isGoodString(subString)) {
	// 			// subString which you've extracted is a goodSubString
	// 			max_len = max(max_len, j-i+1);
	// 		}
	// 	}
	// }

	// approach 2 - O(n) 

	int count = 0;
	for(int i=0; str[i] != '\0'; i++) {
		char ch = str[i];
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			// ch is vowel
			count++;
			max_len = max(max_len, count);
		} else {
			// ch is consonant
			count = 0;
		}
	}

	cout << "length of the longest goodSubtring = " << max_len << endl;
	
	return 0;
}