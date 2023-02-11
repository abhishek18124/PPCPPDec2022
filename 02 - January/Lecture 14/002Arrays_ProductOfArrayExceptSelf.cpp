// contraints : n <= 100

#include<iostream>

using namespace std;

int main() {

	int nums[] = {1, 2, 3, 4, 5};
	int n = sizeof(nums) / sizeof(int);

	int answer[100];

	// approach 1 - O(N^2) times O(1) space

	// for(int i=0; i<n; i++) {

	// 	// l_i : product of all the elements in the range [0, i-1]
	// 	int l_i = 1;
	// 	for(int j=0; j<=i-1; j++) {
	// 		l_i *= nums[j];
	// 	}

	// 	// r_i : product of all the elements in the range [i+1, n-1]
	// 	int r_i = 1;
	// 	for(int j=i+1; j<=n-1; j++) {
	// 		r_i *= nums[j];
	// 	}

	// 	answer[i] = l_i * r_i;

	// }

	// approach 2 - O(N) time O(N) space

	int l[100];
	l[0] = 1;
	for(int i=1; i<n; i++) {
		l[i] = l[i-1]*nums[i-1];
	}

	int r[100];
	r[n-1] = 1;
	for(int i=n-2; i>=0; i--) {
		r[i] = r[i+1]*nums[i+1];
	}

	for(int i=0; i<n; i++) {
		answer[i] = l[i]*r[i];
	}
	
	for(int i=0; i<n; i++) {
		cout << answer[i] << " ";
	}

	cout << endl;

	return 0;
}