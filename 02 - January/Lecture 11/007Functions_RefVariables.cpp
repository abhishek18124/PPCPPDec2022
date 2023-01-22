#include<iostream>

using namespace std;


int main() {

	int x = 100;

	int& y = x;

	cout << y << endl;

	y++;

	cout << x << endl;

	return 0;
}