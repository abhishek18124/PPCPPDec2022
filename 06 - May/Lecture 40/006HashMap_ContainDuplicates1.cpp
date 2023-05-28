#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;

int main() {

	vector<int> v = {1, 2, 3};

	// approach - time : n+n = 2n ~ O(n) space : O(n)

	unordered_map<int, int> freqMap;

	for (int x : v) {
		freqMap[x]++;
	}

	// for (pair<int, int> p : freqMap) {
	// 	cout << p.first << " " << p.second << endl;
	// }

	bool flag = false; // assume no duplicates are present

	for (pair<int, int> p : freqMap) {
		if (p.second > 1) {
			// p.first is a duplicate
			flag = true;
			cout << p.first << " ";
			// break;
		}
	}

	flag ? cout << "true" << endl :  cout << "false" << endl;

	// using set

	// time : n space : n

	flag = false;

	unordered_set<int> seen;

	for (int x : v) {
		if (seen.find(x) != seen.end()) {
			flag = true;
			break;
		}
		seen.insert(x);
	}

	flag ? cout << "true" << endl :  cout << "false" << endl;

	return 0;
}