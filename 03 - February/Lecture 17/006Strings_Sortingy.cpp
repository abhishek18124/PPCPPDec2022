#include<iostream>
#include<algorithm>

using namespace std;

// assume s1 is currently present in the array before s2

// if swap is not required, return true
// else return false

bool myStringLengthCompartor(string s1, string s2) {
	if(s1.size() < s2.size()) {
		// you don't need a swap
		return true;
	} else {
		// you need a swap
		return false;
	}
}

bool myStringDecreasingCompartor(string s1, string s2) {
	// if(s1 > s2) {
	// 	// you don't need a swap
	// 	return true;
	// } else {
	// 	// you need a swap
	// 	return false;
	// }

	return s1 > s2;
}

int main() {

	// string arr[] = {"abc", "ghi", "jkl", "def"};
	// int n = 4;

	// sort(arr, arr+n);

	// for(int i=0; i<n; i++) {
	// 	cout << arr[i] << " ";
	// }

	// cout << endl;

	// string brr[] = {"zzz", "defg", "bc", "a"};
	// int n = 4;

	// // sort(brr, brr+n);

	// sort(brr, brr+n, myStringLengthCompartor);

	// for(int i=0; i<n; i++) {
	// 	cout << brr[i] << " ";
	// }

	// cout << endl;


	string crr[] = {"defg", "a", "bc", "zzz" };
	int n = 4;

	// sort(crr, crr+n, myStringDecreasingCompartor);
	sort(crr, crr+n, greater<string>());


	for(int i=0; i<n; i++) {
		cout << crr[i] << " ";
	}

	cout << endl;

	int err[] = {10, 20, 30, 40, 50};

	sort(err, err+5, greater<int>());

	for(int i=0; i<5; i++) {
		cout << err[i] << " ";
	}

	cout << endl;

	return 0;
}