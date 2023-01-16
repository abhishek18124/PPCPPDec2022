#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 10, 20};
	int n = sizeof(arr) / sizeof(int);

	int t = 100;

	bool flag = false; // assume t is not present in the array

	for(int i=0; i<n; i++) {
		if(arr[i] == t) {
			cout << i << " ";
			flag = true;
		}
	}

	if(!flag) { // flag == false
		cout << -1 << endl;
	}

	return 0;
}