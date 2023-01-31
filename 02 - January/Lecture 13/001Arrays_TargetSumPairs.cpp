#include<iostream>
#include<algorithm>

using namespace std;

int main() {	

	int arr[] = {10, 20, 30, 40, 50, 60};
	int n = sizeof(arr) / sizeof(int);
	int t = 60;

	int count = 0;

	// // approach 1 - O(n^2)

	// for(int i=0; i<=n-2; i++) {
	// 	for(int j=i+1; j<=n-1; j++) {
	// 		if(arr[i]+arr[j] == t) {
	// 			count++;
	// 		}
	// 	}
	// }

	// approach 2 - O(n)

	int i = 0;
	int j = n-1;

	while(i < j) {
		int sum_ij = arr[i]+arr[j];
		if(sum_ij == t) {
			count++;
			i++;
			j--;
		} else if(sum_ij > t) {
			j--;
		} else {
			i++;
		}
	}

	cout << count << endl;

	return 0;
}