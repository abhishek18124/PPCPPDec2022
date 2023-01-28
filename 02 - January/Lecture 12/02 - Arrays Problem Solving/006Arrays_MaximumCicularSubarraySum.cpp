// constraints : n <= 100

#include<iostream>

using namespace std;

// approach - O(n) time and O(1) space

int max_circular_sum(int arr[], int n) {

	int x = arr[0];
	int y = arr[0];

	int a = x;
	int b = y;
	int c = arr[0];

	for(int i=1; i<n; i++) {
		x = max(x+arr[i], arr[i]);
		a = max(a, x);

		y = min(y+arr[i], arr[i]);
		b = min(b, y);
		
		c += arr[i];
		
	}

	// cout << a << " " << b << " " << c << endl;

	int d = c-b;

	return c==b ? a : max(a, d);


}


int main() {

	int arr[] = {-1, -2, -3, -4, -5};
	int n = sizeof(arr) / sizeof(int);

	cout << max_circular_sum(arr, n) << endl;

	return 0;
}