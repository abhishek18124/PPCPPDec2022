#include<iostream>
#include<climits>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int ans = 0; // to store the unique number

	int x;
	for(int i=0; i<n; i++) {
		cin >> x;
		ans ^= x; // ans = ans^x
	}

	cout << ans << endl;
	
	return 0;
}