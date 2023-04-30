#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {100, 80, 60, 70, 60, 75, 85};
	int n = sizeof(arr) / sizeof(int);

	stack<pair<int,int>> s;
	vector<int> v; 

	for(int i=0; i<n; i++) {

		// for the ith day, to cal. the stock span, find the idx of the nearest greater element to the left of arr[i]

		while(!s.empty() and s.top().first <= arr[i]) {
			s.pop();
		}

		int j; // to store the idx. of the nearest greater element ot the left of arr[i]

		if(s.empty()) {
			j = -1;
		} else {
			j = s.top().second;
		}

		v.push_back(i-j);

		s.push({arr[i], i});

	}

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;


	return 0;
}