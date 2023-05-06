#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int h[] = {2, 1, 5, 6, 2, 3};
	int n = sizeof(h) / sizeof(int);

	vector<int> x; // to store the indices of nearest smaller element to left 
	deque<pair<int, int>> s; // first : value, second : idx // we are using back-end of the deque as the top of the stack

	for(int i=0; i<n; i++) {

		while(!s.empty() and s.back().first >= h[i]) {
			s.pop_back();
		}

		if(s.empty()) {
			// h[i] doesn't have a nearest smaller element to it left
			x.push_back(-1);
		} else {
			x.push_back(s.back().second);
		}

		s.push_back({h[i], i});

	}

	s.clear();

	vector<int> y; // to store the indices of nearest smaller element to right 
	
	for(int i=n-1; i>=0; i--) {

		while(!s.empty() and s.back().first >= h[i]) {
			s.pop_back();
		}

		if(s.empty()) {
			// h[i] doesn't have a nearest smaller element to it right
			y.push_back(n);
		} else {
			y.push_back(s.back().second);
		}

		s.push_back({h[i], i});

	}

	reverse(y.begin(), y.end());

	int maxArea = 0; // to track the area of the largest rectangle in the histogram

	for(int i=0; i<n; i++) {

		// compute the area of the largest rectangle whose height is h[i]

		int area = h[i] * (y[i]-x[i]-1);
		maxArea = max(maxArea, area);

	}

	cout << maxArea << endl;

	deque<int> d = {1, 2, 3, 4, 5};

	d.pop_front();

	for(int i=0; i<d.size(); i++) {
		cout << d[i] << " ";
	}	

	cout << endl;


	return 0;
}