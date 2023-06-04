#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int main() {

	string str = "abccccdd";
	unordered_set<char> seen;

	string lhalf = "";
	string rhalf = "";

	int count = 0;

	for (char ch : str) {
		if (seen.find(ch) == seen.end()) {
			seen.insert(ch);
		} else {
			count += 2;
			seen.erase(ch);
			lhalf += ch;
			rhalf = ch + rhalf;
		}
	}

	cout << lhalf + rhalf << endl;

	string out;

	if (seen.size() > 0) {
		out = lhalf + *seen.begin() + rhalf;
		count++;
	}

	cout << out << endl;
	cout << count << endl;

	return 0;
}