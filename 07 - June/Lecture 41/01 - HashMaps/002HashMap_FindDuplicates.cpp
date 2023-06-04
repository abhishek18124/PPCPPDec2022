#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> v = {1, 0, 1, 0, 2};
	int n = v.size();

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < v.size(); i++) {
		v[v[i] % n] += n;
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < v.size(); i++) {
		if (v[i] / n > 1) {
			cout << i << " ";
		}
	}

	cout << endl;

	return 0;
}