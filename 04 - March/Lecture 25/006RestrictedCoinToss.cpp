// n <= 10

#include<iostream>

using namespace std;

void tossCoin(int n, char* out, int i, int j) {

	// base case
	if(i == n) { // or j == n
		out[j] = '\0';
		cout << out  << endl;
		return;
	}

	// recursive case

	// toss the ith coin

	// 1. it shows head i.e. 'H'
	if(i == 0 || out[j-1] == 'T') {
		// ith coin toss can show 'H' only when it is either the first coin toss i.e. i = 0 or last coin toss was 'T' i.e. out[j-1] = 'T'
		out[j] = 'H';
		tossCoin(n, out, i+1, j+1);
	}

	// 2. it shows tail i.e. 'T'
	out[j] = 'T';
	tossCoin(n, out, i+1, j+1);

}

int main() {

	int n = 3;

	char out[10];

	tossCoin(n, out, 0, 0);

	return 0;
}