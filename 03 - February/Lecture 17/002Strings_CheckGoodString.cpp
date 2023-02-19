#include<iostream>
#include<algorithm>

using namespace std;

// bool isGoodString(string str) {
// 	for(int i=0; str[i] != '\0'; i++) {
// 		char ch = str[i];
// 		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
// 			// ch is vowel, continue to scan the string
// 		} else {
// 			// ch is consonant, not a vowel
// 			return false;
// 		}
// 	}

// 	return true;
// }

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

	string str = "aeuju";
	
	isGoodString(str) ? cout << "good string" << endl :
	                    cout << "not good string" << endl;
	
	return 0;
}