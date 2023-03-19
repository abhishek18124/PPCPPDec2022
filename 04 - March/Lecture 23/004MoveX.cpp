/*

Given a string str, design a recursive algorithm to move all the occurrence of letter x 
to the end of the string str.

Example 
	Input : str = "axbcxdxfx"
	Output: str = "abcdfxxxx"

	Input : str = "xabcxdxfx"
	Output: str = "abcdfxxxx"

*/

#include<iostream>

using namespace std;

string moveX(string str) {

	// base case 
	if(str == "") { // str.empty()
		return str;
	}	


	// recursive case

	// 1. extract the subString which starts from the 1st index

	string subString = str.substr(1);

	// 2. ask your friend to move all 'x' to the end for the given subString

	string stringFromMyFriend = moveX(subString);

	// char ch = str[0];

	// if(ch == 'x') {
	// 	return stringFromMyFriend + ch;
	// } else {
	// 	return ch + stringFromMyFriend;
	// }

	string ch = string(1, str[0]); // str.substr(0, 1);
	if(ch == "x") {
		return stringFromMyFriend + ch;
	}

	return ch + stringFromMyFriend;

}

int main() {

	string str = "bcxxxa";

	cout << moveX(str) << endl;

	return 0;
}