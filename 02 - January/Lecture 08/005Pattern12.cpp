#include<iostream>

using namespace std;

int main() {

	int n = 9;

	int m = n/2;

	// 1. print 1st part of the pattern
	
	for(int i=1; i<=n; i++) {
		cout << "*";
	}

	cout << endl;

	// 2. print 2nd part of the pattern
	
	for(int i=1; i<=m; i++) {

		// in the ith row, print (m-i+1) stars
		for(int j=1; j<=m-i+1; j++) {
			cout << "*";
		}

		// then, print (2i-1) spaces
		for(int j=1; j<=2*i-1; j++) {
			cout << " ";
		}

		// then, print (m-i+1) stars
		for(int j=1; j<=m-i+1; j++) {
			cout << "*";
		}

		cout << endl;

	}

	// 3. print 3rd part of the pattern
	
	// for(int i=1; i<=m-1; i++) {

	// 	// in the ith row, print (i+1) stars
	// 	for(int j=1; j<=i+1; j++) {
	// 		cout << "*";
	// 	}

	// 	// then, print n-(2*(i+1)) spaces
	// 	for(int j=1; j<=n-2*(i+1); j++) {
	// 		cout << " ";
	// 	}

	// 	// then, print (i+1) stars
	// 	for(int j=1; j<=i+1; j++) {
	// 		cout << "*";
	// 	}

	// 	cout << endl;

	// }

	for(int i=2; i<=m; i++) {

		// in the ith row, print i stars
		for(int j=1; j<=i; j++) {
			cout << "*";
		}

		// then, print 2(m-i)+1 spaces
		for(int j=1; j<=2*(m-i)+1; j++) {
			cout << " ";
		}

		// then, print i stars
		for(int j=1; j<=i; j++) {
			cout << "*";
		}

		cout << endl;

	}

	// 4. print 4th part of the pattern
	
	for(int i=1; i<=n; i++) {
		cout << "*";
	}

	cout << endl;

	return 0;
}