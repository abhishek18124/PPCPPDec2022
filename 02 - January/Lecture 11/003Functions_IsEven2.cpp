#include<iostream>

using namespace std;

bool isEven(int n) {
	return n%2 == 0;
}


int main() {

	bool ans = isEven(4);

	cout << ans << endl;

	ans = isEven(5);

	cout << ans << endl;

	cout << isEven(6) << endl;

	if(isEven(8)) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	isEven(9) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}