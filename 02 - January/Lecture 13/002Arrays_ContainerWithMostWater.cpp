#include<iostream>
#include<algorithm>

using namespace std;

int maxArea(int height[], int n) {

	int i = 0;
	int j = n-1;

	int lsf = 0;

	while(i < j) {

		int w = j-i;
		int h = min(height[i], height[j]);
		int a = w*h;

		lsf = max(lsf, a);

		if(height[i] < height[j]) {
			i++;
		} else {
			j--;
		}

	}

	return lsf;

}

int main() {	

	int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
	int n = sizeof(height)/sizeof(int);

	cout << maxArea(height, n) << endl;

	return 0;
}