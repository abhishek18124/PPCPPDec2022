#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	int arr[] = {0, 3, 5, 4, 1, 6, 2};
	int n = sizeof(arr) / sizeof(int);

	stack<pair<int, int>> s; // pair<int, int> : value, idx
	vector<int> v; // to store the idx. of the nearest smaller element to the left of each array element

	for(int i=0; i<n; i++) {

		// find the idx. of the nearest smaller element ot the left of arr[i]

		while(!s.empty() and s.top().first >= arr[i]) {
			s.pop();
		}

		if(s.empty()) {
			v.push_back(-1);
		} else {
			// s.top().first < arr[i] 
			v.push_back(s.top().second);
		}

		s.push({arr[i], i}); // s.push(make_pair(arr[i], i))

	}

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}