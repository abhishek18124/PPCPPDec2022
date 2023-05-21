/*

	Given an array of n integers, sort the array using heap sort algorithm.

*/

#include<iostream>
#include<vector>

using namespace std;

void heapify(vector<int>& v, int i, int n) {
	int max_idx = i;

	int leftChildIdx = 2*i+1;
	if(leftChildIdx < n && v[leftChildIdx] > v[max_idx]) {
		max_idx = leftChildIdx;
	}

	int rightChildIdx = 2*i+2;
	if(rightChildIdx < n && v[rightChildIdx] > v[max_idx]) {
		max_idx = rightChildIdx;
	}

	if(max_idx != i) {
		swap(v[max_idx], v[i]);
		heapify(v, max_idx, n);
	}
}


int main() {
	
	vector<int> v = {1, 3, 2, 7, 5, 4, 6, 9, 8};

	int n = v.size();

	// 1. transform v[] in maxHeap : O(n) 

	for(int i=n-1; i>=0; i--) {
		heapify(v, i, n);
	}

	int heapsize = n;

	// 2. time : (nlogn)

	while(heapsize > 1) {
		swap(v[0], v[heapsize-1]);
		heapsize--;
		heapify(v, 0, heapsize); // O(logn) since we call heapify on root
	}

	// total time = n + nlogn ~ O(nlogn)
	// total space = logn due to function call stack and n due to modification of i/p array (subjective)

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;
	
	return 0;
}
