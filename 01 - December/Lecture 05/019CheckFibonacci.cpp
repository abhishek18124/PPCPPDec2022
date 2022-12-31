#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	if(n == 0 || n == 1) {
		// n is fibonacci no.
		cout << "true" << endl;
		return 0;
	}

	int a = 0; // to store the 0th fib. no.
	int b = 1; // to store the 1st fib. no.

	while(true) {

		// generate the next fibonacci no.

		int c = a+b;

		if(c == n) {
			// n is a fibonacci no.
			cout << "true" << endl;
			break;
		}

		if(c > n) {
			// n is not a fibonacci no.
			cout << "false" << endl;
			break;
		}

		a = b;
		b = c;

	}
	
	return 0;
}