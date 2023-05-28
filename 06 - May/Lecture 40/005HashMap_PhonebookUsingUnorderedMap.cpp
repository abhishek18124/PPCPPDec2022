/*

	Implement a phonebook storing mapping between person's name and
	their phone numbers using an unordered_map.

*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {

	unordered_map<string, vector<string>> phoneMap;

	phoneMap["Krish"].push_back("1234");
	phoneMap["Krish"].push_back("5678");
	phoneMap["Krish"].push_back("0000");

	phoneMap["Saurabh"].push_back("1111");
	phoneMap["Saurabh"].push_back("2222");

	for (pair<string, vector<string>> p : phoneMap) {
		string username = p.first;
		cout << username << " : ";
		vector<string> numbers = p.second;
		for (string num : numbers) {
			cout << num << " ";
		}
		cout << endl;
	}

	return 0;
}