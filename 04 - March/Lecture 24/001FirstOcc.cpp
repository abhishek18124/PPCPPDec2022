#include<iostream>

using namespace std;

int f(int* x, int n, int t, int i) {

	// base case
	
	// if(i == n) {
	// 	// target not found
	// 	return -1;
	// }

	if(i == n-1) {
		// find the index of the 1st occurrence of the 't' in x[n-1...n-1]
		if(x[n-1] == t) {
			return n-1;
		}
		// target is not present
		return -1;
	}

	// recursive case

	// find the index of the 1st occurrence of the 't' in x[i...n-1]

	if(x[i] == t) {
		// you've found the 't' at index 'i'
		return i;
	}

	// ask your friend to find the index of the 1st occurrence of the 't' in x[i+1...n-1]

	return f(x, n, t, i+1);

}

int main() {

	int x[] = {10, 20, 30, 20, 30};
	int n = sizeof(x) / sizeof(int);
	int t = 30;

	cout << f(x, n, t, 0) << endl;

	return 0;
}