#include<iostream>

using namespace std;

// time : n/2 steps i.e. O(n) space : O(1)

bool isPalindrome(char* str) {

	int i = 0;
	int j = strlen(str)-1;

	while(i < j) {
		if(str[i] != str[j]) {
			// str is not a palindrome
			return false;
		}
		i++;
		j--;
	}

	// str is a palindrome
	return true;

}

int main() {

	char str[] = "abcdba";

	isPalindrome(str) ? cout << "palindrome!" <<  endl :
	                    cout << "not a palindrome" << endl;
		
	return 0;
}