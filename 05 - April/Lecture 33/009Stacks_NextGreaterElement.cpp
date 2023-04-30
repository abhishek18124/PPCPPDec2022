#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {5, 3, 6, 7, 2, 1, 4};
	int n = sizeof(arr) / sizeof(int);

	stack<int>  s;
	vector<int> v; // to store the next greater element for each element in the array

	for(int i=n-1; i>=0; i--) {

		// find the next greater element for arr[i]

		while(!s.empty() and s.top() <= arr[i]) {
			s.pop();
		}

		if(s.empty()) {
			// arr[i] doesn't have a next greater element
			v.push_back(-1);
		} else { // s.top() > arr[i]
			v.push_back(s.top());
		}

		s.push(arr[i]);

	}

	reverse(v.begin(), v.end());

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;


	return 0;
}