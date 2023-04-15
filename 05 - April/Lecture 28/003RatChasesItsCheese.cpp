/*

Given a m x n maze with some blocked cells (marked with 'X'), and rat that wants to
go from the src (0, 0) to the dst (m-1, n-1) design a recursive algorithm to
	
	> generate all the paths from src to dst

such at each step the rat can only move in the right or down direction.

Constraint 

 1 <= m, n < 10

Example 
	Input : 

		maze = {"0000",
	            "00X0",
	            "000X",
	            "0X00"}
	
	Output :

	       {"1100", {"1000", {"1000",
            "0100",	 "1100",  "1000",
            "0110",  "0110",  "1110",
            "0011"}  "0011"}  "0011"}

*/

#include<iostream>

using namespace std;

void printPath(char maze[][10], char path[][10], int m, int n, int i, int j) {

	// base case

	if(i == -1 || i == m || j == -1 || j == n) {
		return;
	}

	if(i == m-1 and j == n-1) {
		path[i][j] = '1';
		for(int ii=0; ii<m; ii++) {
			for(int jj=0; jj<n; jj++) {
				cout << path[ii][jj] << " ";
			}
			cout << endl;
		}
		cout << endl;
		path[i][j] = '0';
		return;
	}

	// recursive case

	if(maze[i][j] == 'X') {
		return;
	}

	// if(path[i][j] == '1') {
	// 	// (i, j)th is already part of the path we're building
	// 	return;
	// }

	path[i][j] = '1';
	maze[i][j] = 'X';

	// // 1. move right

	// printPath(maze, path, m, n, i, j+1);

	// // 2. move left

	// printPath(maze, path, m, n, i, j-1);

	// // 3. move down

	// printPath(maze, path, m, n, i+1, j);

	// // 4. move up

	// printPath(maze, path, m, n, i-1, j);

	int dx[] = {0, 0, -1, 1};
	int dy[] = {1, -1, 0, 0};

	for(int k=0; k<4; k++) {
		printPath(maze, path, m, n, i+dx[k], j+dy[k]);
	}

	path[i][j] = '0'; // backtracking step
	maze[i][j] = '0'; // backtracking step

}

int main() {

	char maze[][10] = {"0X00",
	           		   "000X",
	                   "X0X0",
	                   "X00X",
	                   "XX00"};

	char path[][10] = {"0000",
	                   "0000",
	                   "0000",
	                   "0000",
	                   "0000"};
	int m = 5;
	int n = 4;

	printPath(maze, path, m, n, 0, 0);

	return 0;
}
