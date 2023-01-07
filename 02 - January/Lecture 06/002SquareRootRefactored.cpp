#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer : ";
	cin >> n;

	int p;
	cout << "Enter a positive integer p : ";
	cin >> p;

	double rn = 0; // to track the square root of n
	double inc = 1; // increment factor

	int i=1;
	
	while(i <= p+1) {
		
		while(rn*rn <= n) {
			rn = rn+inc;
		}
		
		rn = rn-inc;
		inc = inc/10;
		
		i=i+1;
	}

	cout << "sqrt(" << n << ") = " << rn << endl;
	
	return 0;
}