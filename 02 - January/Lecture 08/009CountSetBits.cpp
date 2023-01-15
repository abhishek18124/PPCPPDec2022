#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n = 128;
	int count = 0;

	// while(n > 0) {

	// 	cout << n << endl;

	// 	// check if the 0th bit of n is set

	// 	if(n&1) {
	// 		count++;
	// 	}

	// 	n >>= 1;

	// }

	// for(int k=0; k<32; k++) {

	// 	// check if the kth bit of n is set

	// 	if(n>>k&1) {
	// 		// kth bit of n is set
	// 		count++;
	// 	}

	// }

	for(int k=0; k<ceil(log2(n+1)); k++) {

		// check if the kth bit of n is set

		if(n>>k&1) {
			// kth bit of n is set
			count++;
		}

	}

	cout << count << endl;
	
	return 0;
}