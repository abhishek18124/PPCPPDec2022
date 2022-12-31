#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive integer : ";
	cin >> n;

	int sum = 0; // to track the sum of digits of 'n' 
	
	while(n > 0) { // n != 0
		int digit = n%10;
		sum = sum + digit;
		n = n/10;
	}

	cout << sum << endl;
	
	return 0;
}