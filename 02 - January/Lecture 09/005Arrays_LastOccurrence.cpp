#include<iostream>

using namespace std;

int main() {

	int arr[100];

	int n;
	cout << "enter the size of the array : ";
	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	int t;
	cout << "enter the value of target : " ;
	cin >> t;

	// time : O(n) : as the input size grows, the time the algorithm takes also grows linearly
	
	int ans = -1;

	for(int i=n-1; i>=0; i--) {
		if(arr[i] == t) {
			ans = i;
			break;
		}
	}

	cout << ans << endl;

	return 0;
}