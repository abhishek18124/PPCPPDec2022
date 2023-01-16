#include<iostream>
#include<cstring> // for memset

using namespace std;

int main() {

	int A[5] = {10, 20, 30, 40, 50};

	// cout << "A[0] = " << A[0] << endl;	
	// cout << "A[1] = " << A[1] << endl;
	// cout << "A[2] = " << A[2] << endl;
	// cout << "A[3] = " << A[3] << endl;
	// cout << "A[4] = " << A[4] << endl;

	// for(int i=0; i<5; i++) {
	// 	cout << "A[" << i << "] = " << A[i] << endl;
	// }

	// int B[5] = {10, 20, 30}; 

	// for(int i=0; i<5; i++) {
	// 	cout << "B[" << i << "] = " << B[i] << endl;
	// }

	// int C[5] = {}; // array is initialized with zero

	int D[5]; // garbage

	memset(D, 0, sizeof(D));

	for(int i=0; i<5; i++) {
		cout << D[i] << " ";
	}

	cout << endl;

	return 0;
}