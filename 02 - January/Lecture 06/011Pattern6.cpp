#include<iostream>

using namespace std;

int main() {

	int n = 5;

	for(int i=1; i<=n; i++) {

		// in the ith row, print (n-i) spaces
		for(int j=1; j<=n-i; j++) {
			cout << "  ";
		}

		// then i nos. in the inc. order starting with i
		int num = i;
		for(int j=1; j<=i; j++) {
			cout << num << " ";
			num++; 
		}

		cout << endl;

	}

	return 0;
}