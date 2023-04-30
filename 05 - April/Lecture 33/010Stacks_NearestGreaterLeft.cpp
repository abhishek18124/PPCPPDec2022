#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	int arr[] = {5, 2, 0, 4, 1, 3, 6};
	int n = sizeof(arr) / sizeof(int);

	stack<int>  s;
	vector<int> v; // to store the next greater element for each element in the array

	for(int i=0; i<=n-1; i++) {

		// find the nearest greater element to the left for arr[i]

		while(!s.empty() and s.top() <= arr[i]) {
			s.pop();
		}

		if(s.empty()) {
			// arr[i] doesn't have a greater element to its left
			v.push_back(-1);
		} else { // s.top() > arr[i]
			v.push_back(s.top());
		}

		s.push(arr[i]);

	}

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;



	return 0;
}