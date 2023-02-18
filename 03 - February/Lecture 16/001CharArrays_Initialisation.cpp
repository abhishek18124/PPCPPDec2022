#include<iostream>

using namespace std;

int main() {

	char str[] = {'a', 'b', 'c', 'd', 'e', '\0'};

	// cout << str[0] << endl;
	// cout << str[1] << endl;
	// cout << str[2] << endl;
	// cout << str[3] << endl;
	// cout << str[4] << endl;
	
	cout << str << endl;

	char str1[] = "coding blocks";

	cout << str1 << endl;

	if(str1[13] == '\0') cout << "found null character!" << endl;

	cout << sizeof(str1) << "B" << endl;

	char str2[] = "india";

	for(int i=0; str2[i] != '\0'; i++) {
		cout << str2[i] << " ";
	}

	cout << endl;

	return 0;
	
}