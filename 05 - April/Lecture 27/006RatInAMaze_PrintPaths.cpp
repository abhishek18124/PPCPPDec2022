/*

	constraint : 1 <= m, n < 10

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

void printPath(char path[][10], int m, int n) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cout << path[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void f(char maze[][10], char path[][10], int m, int n, int i, int j) {

	// base case
	
	// todo ..

	// recursive case

	// todo ...

}

int main() {

	char maze[][10] = {"0000",
	           		   "00X0",
	                   "000X",
	                   "0X00"};

	char path[][10] = {"0000",
	                   "0000",
	                   "0000",
	                   "0000"};
	int m = 4; 
	int n = 4;

	f(maze, path, m, n, 0, 0);

	return 0;
}