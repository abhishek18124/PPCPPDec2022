#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {

	vector<int> v = {1, 2, 3, 1, 2, 3};
	int k = 3;

	bool flag = false; // assume valid pair exists

	unordered_map<int, int> indexMap;

	// time : n.c ~ O(n)
	// space : O(n) if all elements are unique

	for (int i = 0; i < v.size(); i++) {
		if (indexMap.find(v[i]) != indexMap.end()) {
			int j = indexMap[v[i]];
			if (abs(i - j) <= k) {
				flag = true;
				break;
			}
		}
		indexMap[v[i]] = i;
	}

	flag ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}