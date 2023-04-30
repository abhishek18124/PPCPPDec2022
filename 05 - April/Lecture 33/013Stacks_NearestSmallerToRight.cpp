#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {2, 5, 1, 3, 6, 4, 0};
	int n = sizeof(arr) / sizeof(int);

	stack<pair<int, int>> s; // pair<int, int> : value, idx
	vector<int> v; // to store the idx. of the nearest smaller element to the right of each array element

	for(int i=n-1; i>=0; i--) {

		// find the idx. of the nearest smaller element ot the right of arr[i]

		while(!s.empty() and s.top().first >= arr[i]) {
			s.pop();
		}

		if(s.empty()) {
			v.push_back(n);
		} else {
			// s.top().first < arr[i] 
			v.push_back(s.top().second);
		}

		s.push({arr[i], i}); // s.push(make_pair(arr[i], i))

	}

	reverse(v.begin(), v.end());

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}