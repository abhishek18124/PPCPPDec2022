#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive integer : ";
	cin >> n;

	int i=2;
	int rn = sqrt(n);
	while(i <= rn) {
		if(n%i == 0) {
			// i is factor of n
			cout << n << " is not a prime no." << endl;
			break;
		}
		i=i+1;
	}

	if(i > rn) {
		cout << n << " is prime" << endl;
	}
	return 0;
}