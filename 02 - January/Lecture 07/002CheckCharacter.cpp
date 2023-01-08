#include<iostream>

using namespace std;

int main() {

	char ch;
	cout << "enter a character : ";
	cin >> ch;

	if(ch >= 'A' and ch <= 'Z') {
		cout << "upper-case" << endl;
	} else if(ch >= 'a' and ch <= 'z') {
		cout << "lower-case" << endl;
	} else if(ch >= '0' and ch <= '9') {
		cout << "digit" << endl;
	} else {
		cout << "special" << endl;
	}
	
	if(ch >= 65 and ch <= 90) {
		cout << "upper-case" << endl;
	} else if(ch >= 97 and ch <= 122) {
		cout << "lower-case" << endl;
	} else if(ch >= 48 and ch <= 57) {
		cout << "digit" << endl;
	} else {
		cout << "special" << endl;
	}

	cout << (int)'*' << endl; // explicit type-casting
 	cout << '*' << endl;

	int y = '*'; // implicit type-casting
	cout << y << endl;

	char ch2 = '6';

	cout << "ch2 = " << ch2 << endl;
	cout << "(int)ch2 = " << (int)ch2 << endl;

	int z = ch2;
	cout << "z = " << z << endl;
	cout << "ch2-'0' = " << ch2-'0' << endl;
 	
	return 0;
}