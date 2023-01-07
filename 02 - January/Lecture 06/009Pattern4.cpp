#include<iostream>

using namespace std;

int main() {

	int n = 5;

	for(int i=1; i<=n; i++) {

		// in the ith row, print i nos. 

		// int num;

		// if(i%2 == 0) {
		// 	// you are in an even row
		// 	num = 0;
		// } else {
		// 	num = 1;
		// }

		int num = i%2 == 0 ? 0 : 1;

		for(int j=1; j<=i; j++) {
			cout << num << " ";
			num = 1-num;
		}

		cout << endl;

	}

	return 0;
}