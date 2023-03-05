/*

	constraints :

	0 < m, n <= 10

*/

#include<iostream>

using namespace std;

void sortDiagonal(int mat[][10], int m, int n, int i, int j) {

	int dLen = min(m-i, n-j);
	int diagonal[dLen];

	for(int k=0; k<dLen; k++) {
		diagonal[k] = mat[i+k][j+k];
	}

	sort(diagonal, diagonal+dLen);

	for(int k=0; k<dLen; k++) {
		mat[i+k][j+k] = diagonal[k];
	}

}

int main() {
	
	int mat[][10] = {{50, 80, 20},
					 {90, 10, 70},
					 {60, 30, 40}};

	int m = 3;
	int n = 3;

	// iterate over starting points of diagonal

	for(int j=0; j<n; j++) {
		sortDiagonal(mat, m, n, 0, j);
	}

	for(int i=1; i<m; i++) {
		sortDiagonal(mat, m, n, i, 0);
	}

	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	return 0;
}