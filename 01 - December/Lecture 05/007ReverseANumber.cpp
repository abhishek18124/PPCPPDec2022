#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive interger : ";
	cin >> n;

	int ans = 0; // to store the reverse of 'n'

	while(n > 0) {

		// int digit = n%10;
		ans = ans*10 + n%10;
		n = n/10;

	}

	cout << ans << endl;
	
	return 0;
}