#include<iostream>

using namespace std;

int search(int mat[][3], int m, int n, int t) {

	int i = 0;
	int j = n-1;

	while(i < m and j >= 0) {
		if(mat[i][j] == t) {
			return true;
		} else if(t > mat[i][j]) {
			// search for 't' in the next row
			i++;
		} else {
			// search for 't' in the prev col
			j--;
		}
	}

	return false;

}

int main() {

	int mat[][3] = {{10, 20, 30},
					{40, 50, 60},
					{70, 80, 90}};

	int m = 3;
	int n = 3;

	int t = 75;

	search(mat, m, n, t) ? cout << t << " found!" << endl : 
	                       cout << t << " not found!" << endl;

	return 0;
}