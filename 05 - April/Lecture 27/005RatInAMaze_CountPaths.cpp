/*

	constraint : 1 <= m, n < 10

*/

#include<iostream>

using namespace std;

int f(char maze[][10], int m, int n, int i, int j) {

	// base case

	// todo ...

	// recursive case

	// count the no. of paths that go from the (i, j)th cell to the (m-1, n-1)th cell

	// todo ...

}

int main() {

	char maze[][10] = {"0000",
	                   "00X0",
	                   "000X",
	                   "0X00"};
	int m = 4;
	int n = 4;

	cout << f(maze, m, n, 0, 0) << endl;

	return 0;
}