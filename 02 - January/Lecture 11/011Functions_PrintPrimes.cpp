#include<iostream>
#include<cmath>

using namespace std;


bool isPrime(int n) {
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i == 0) {
			// you've found a factor of 'n' in the range [2, n-1]
			return false;
		}
	}
	return true;
}

void printPrimes(int m) {

	// print prime numbers upto m

	for(int n=2; n<=m; n++) {
		if(isPrime(n)) {
			cout << n << " ";
		}
 	}

}

int main() {

	int m;
	cout << "Enter the value of m : ";
	cin >> m;

	printPrimes(m);
	
	return 0;
}