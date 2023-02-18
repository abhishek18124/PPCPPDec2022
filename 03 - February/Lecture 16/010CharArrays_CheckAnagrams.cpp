#include<iostream>

using namespace std;

bool isAnagram(char* str1, char* str2) {

	int sFreqMap[26] = {};

	for(int i=0; str1[i] != '\0'; i++) {
		char ch = str1[i];
		int idx = ch-'a';
		sFreqMap[idx]++;
	}

	for(int i=0; i<26; i++) {
		cout << sFreqMap[i] << " ";
	}

	cout << endl;

	int tFreqMap[26] = {};

	for(int i=0; str2[i] != '\0'; i++) {
		tFreqMap[str2[i]-'a']++;
	}

	for(int i=0; i<26; i++) {
		cout << tFreqMap[i] << " ";
	}

	cout << endl;

	for(int i=0; i<26; i++) {
		if(sFreqMap[i] != tFreqMap[i]) {
			// str1 and str2 cannot be anagrams
			return false;
		}
	}


	// str1 and str2 are anagrams
	return true;


}

int main() {

	char str1[] = "aaabbc";
	char str2[] = "bbbcca";

	isAnagram(str1, str2) ? cout << "anagram!" << endl :
	                        cout << "not anagram" << endl;

	return 0;
}