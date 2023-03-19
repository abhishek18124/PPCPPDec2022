#include<iostream>

using namespace std;

// int f(int x, int y) {

// 	// base case
// 	if(y == 0) {
// 		// compute x^0
// 		return 1;
// 	}

// 	// recursive case

// 	// 1. ask your friend to compute x^(y-1)

// 	int A = f(x, y-1);

// 	return x*A;

// }

int f(int x, int y) {

	// base case
	if(y == 0) {
		// return x^0
		return 1;
	}

	// recursive case

	// 1. ask your friend to compute x^(y/2)
	int A = f(x, y/2);

	if(y%2 == 0) {
		// y is even
		return A*A;
	}

	// y is odd
	return A*A*x;

}
 
int main() {

	int x = 3;
	int y = 7;

	cout << f(x, y) << endl;

	return 0;
}