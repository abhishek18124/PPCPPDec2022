#include<iostream>

using namespace std;

int main() {

	int mat[][3] = {{10, 20, 30},
					{40, 50, 60},
					{70, 80, 90}};

	int m = 3;
	int n = 3;

	// print row-wise

	// for(int i=0; i<m; i++) {
	// 	for(int j=0; j<n; j++) {
	// 		cout << mat[i][j] << " ";
	// 	}
	// }

	// print col-wise

	// for(int j=0; j<n; j++) {
	// 	// print the jth column
	// 	for(int i=0; i<m; i++) {
	// 		cout << mat[i][j] << " ";
	// 	}
	// }

	// print wave-form
	for(int j=0; j<n; j++) {
		if(j%2 == 0) {
			// jth column is even therefore to print it, iterate over the rows from 0 to m-1
			for(int i=0; i<m; i++) {
				cout << mat[i][j] << " ";
			}
		} else {
			// jth column is an odd therefore to print it, iterate over the rows from m-1 to 0
			for(int i=m-1; i>=0; i--) {
				cout << mat[i][j] << " ";
			}
		}
	}

	cout << endl;

	return 0;
}