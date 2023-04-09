/*

	constraint : 1 <= m, n < 10

*/

#include<iostream>

using namespace std;

// bool f(char maze[][10], int m, int n, int i, int j) {

// 	// base case

// 	if(i == m-1 and j == n-1) {
// 		return true;
// 	}

// 	// recursive case

// 	// check if there exists a path to go from the (i, j)th cell to the (m-1, n-1)th cell

// 	if(maze[i][j] == 'X') {
// 		return false;
// 	}

// 	if(i == m-1) {
// 		// move right
// 		return f(maze, m, n, i, j+1);
// 	}

// 	if(j == n-1) {
// 		// move down
// 		return f(maze, m, n, i+1, j);
// 	}

// 	// // 1. move right
// 	// bool X = f(maze, m, n, i, j+1);

// 	// // 2. move down
// 	// bool Y = f(maze, m, n, i+1, j);

// 	// return X or Y;

// 	return f(maze, m, n, i, j+1) or f(maze, m, n, i+1, j);

// }

bool f(char maze[][10], int m, int n, int i, int j) {

	// base case

	if(i == m or j == n) {
		return false;
	}

	if(i == m-1 and j == n-1) {
		return true;
	}

	// recursive case

	// check if there exists a path to go from the (i, j)th cell to the (m-1, n-1)th cell

	if(maze[i][j] == 'X') {
		return false;
	}

	// // 1. move right
	// bool X = f(maze, m, n, i, j+1);

	// // 2. move down
	// bool Y = f(maze, m, n, i+1, j);

	// return X or Y;

	return f(maze, m, n, i, j+1) or f(maze, m, n, i+1, j);

}

int main() {

	char maze[][10] = {"0000",
	                   "00X0",
	                   "00XX",
	                   "0X00"};
	int m = 4;
	int n = 4;

	f(maze, m, n, 0, 0) ? cout << "path exists" << endl :
	                      cout << "path doesn't exist" << endl;

	return 0;
}