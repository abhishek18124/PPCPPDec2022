#include<iostream>
#include<algorithm>

using namespace std;

// time : O(m.logn)

bool search(int mat[][3], int m, int n, int t) {

	for(int i=0; i<m; i++) {
		// search for 't' in the ith row using binary search
		if(binary_search(mat[i], mat[i+1], t)) {
			// 't' found
			return true;
		}
	}

	return false;

} 


int main() {

	int mat[][3] = {{40, 50, 60},
					{10, 20, 30},
					{70, 80, 90}};

	int m = 3;
	int n = 3;

	int t = 1000;

	search(mat, m, n, t) ? cout << t << " found!" << endl :
	                       cout << t << " not found!" << endl;

	return 0;
}