#include<iostream>

using namespace std;

void f(int n) {

	// base case
	if(n == 0) {
		// print nos. from 0 to 1 in the decreasing order
		return;
	}

	// recursive case

	cout << n << " ";

	// 1. ask your friend to print nos. from n-1 to 1 in the decreasing order
	f(n-1);


}

int main() {

	int n = 10;

	f(n);

	return 0;
}