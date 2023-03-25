#include<iostream>

using namespace std;

int f(int* x, int t, int i) {

	// base case
	if(i == -1) {
		// target not found
		return -1;
	} 

	// recursive case

	// find the index of the last occurrence of the 't' in x[0...i]

	if(x[i] == t) {
		return i;
	}

	// ask your friend to find the index of  the last occurrence of the 't' in x[0...i-1]

	return f(x, t, i-1);

}

int main() {

	int x[] = {10, 20, 30, 20,  30};
	int n = sizeof(x) / sizeof(int);
	int t = 40;

	cout << f(x, t, n-1) << endl;

	return 0;
}