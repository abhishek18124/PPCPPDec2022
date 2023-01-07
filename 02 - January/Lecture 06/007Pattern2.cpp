#include<iostream>

using namespace std;

int main() {

	int n = 5;

	for(int i=1; i<=n; i++) {

		// in the ith row, print 'i' nos. starting with 
		// 1 in the increasing order and j has this behaviour
		
		for(int j=1, num=1; j<=i; j++, num++) {
			cout << num << " ";
		}

		cout << endl;

	}

	return 0;
}