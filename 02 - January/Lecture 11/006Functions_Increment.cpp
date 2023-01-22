#include<iostream>

using namespace std;

void increment(int n) {
	cout << "Inside incrmeent, before ++, n = " << n << endl;
	n++;
	cout << "Inside increment, after ++, n = " << n << endl;
}

int main() {

	int n = 100;

	cout << "Inside main, before increment(), n = " << n << endl;

	increment(n);

	cout << "Inside main, after increment(), n = " << n << endl;

	return 0;
}