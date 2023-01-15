#include<iostream>
#include<bitset>

using namespace std;

int main() {

	int n = 42;
	int k = 4;

	cout << bitset<6>(n) << endl;

	// if(((n>>k)&1) == 1) {
	// 	// kth bit of n is set
	// 	cout << "true" << endl;
	// } else {
	// 	// kth bit of n is not set
	// 	cout << "false" << endl;
	// }
	
	if(n>>k&1) {
		// kth bit of n is set
		cout << "true" << endl;
	} else {
		// kth bit of n is not set
		cout << "false" << endl;
	}

	if(1<<k&n) { // > 0
		// kth bit of n is set
		cout << "true" << endl;
	} else { // == 0
		// kth bit of n is not set
		cout << "false" << endl;
	}

	1<<k&n ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}