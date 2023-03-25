#include<iostream>
#include<vector>

using namespace std;

// bool flag = false; // assume 't' is not present

// void f(int* x, int n, int t, int i) {

// 	// base case
	
// 	if(i == n) {
// 		if(flag == false) {
// 			// target not found
// 			cout << -1 << " ";
// 		}
// 		return;
// 	}

// 	// recursive case

// 	// find the index of the 1st occurrence of the 't' in x[i...n-1]

// 	if(x[i] == t) {
// 		// you've found the 't' at index 'i'
// 		flag = true;
// 		cout << i <<  " ";
// 		
// 	}

// 	// ask your friend to find the indices of the occurrences of the 't' in x[i+1...n-1]

// 	f(x, n, t, i+1);

// 	return; // optional

// }


void f(int* x, int n, int t, int i, vector<int>& out) {

	// base case
	
	if(i == n) {
		return;
	}

	// recursive case

	// find the index of the 1st occurrence of the 't' in x[i...n-1]

	if(x[i] == t) {
		// you've found the 't' at index 'i'
		out.push_back(i);
	}

	// ask your friend to find the indices of the occurrences of the 't' in x[i+1...n-1]

	f(x, n, t, i+1, out);

}


int main() {

	int x[] = {10, 20, 30, 20, 30};
	int n = sizeof(x) / sizeof(int);
	int t = 20;

	vector<int> out;

	f(x, n, t, 0, out);

	if(out.size() == 0) {
		// 't' is not found
		cout << -1 << endl;
	} else {
		// for(int x : out) {
		// 	cout << x << " ";
		// }
		// cout << endl;

		for(int i=0; i<out.size(); i++) {
			cout << out[i] << " ";
		}

		cout << endl;
	}

	return 0;
}