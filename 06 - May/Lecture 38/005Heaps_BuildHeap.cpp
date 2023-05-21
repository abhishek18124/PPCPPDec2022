/*

	Given an array of n integers, design a O(n) algorirthm to build a max_heap in-place.

*/

#include<iostream>
#include<vector>

using namespace std;

void heapify(vector<int>& v, int i) {
	int min_idx = i;

	int leftChildIdx = 2*i+1;
	if(leftChildIdx < v.size() && v[leftChildIdx] < v[min_idx]) {
		min_idx = leftChildIdx;
	}

	int rightChildIdx = 2*i+2;
	if(rightChildIdx < v.size() && v[rightChildIdx] < v[min_idx]) {
		min_idx = rightChildIdx;
	}

	if(min_idx != i) {
		swap(v[min_idx], v[i]);
		heapify(v, min_idx);
	}
}


int main() {

	vector<int> v = {1, 3, 2, 7, 5, 4, 6, 9, 8};
	
	for(int i=v.size()-1; i>=0; i--) {
		heapify(v, i);
	}

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}





