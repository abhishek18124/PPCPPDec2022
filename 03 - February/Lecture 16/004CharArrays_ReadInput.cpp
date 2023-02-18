// n <= 100

#include<iostream>

using namespace std;

void readString(char* str, char dlim='\n') {
	char ch;
	int i=0;
	while(true) {
		ch = cin.get();
		if(ch == dlim) {
			break;
		}
		str[i] = ch;
		i++;
	}
	str[i] = '\0';
}

int main() {

	char str[101];

	cout << "Enter a string : ";
	
	// cin >> str; // '\0' is automatically added when you read a string using cin >>

	// readString(str);

	// cin.getline(str, 101, '$'); // by default '\n' is the delimiting character

	cin.getline(str, 5, '$'); // by default '\n' is the delimiting character

	// hello$ -> hell
	// he$llo world how are $ you -> he

	cout << "You've entered : " << str << endl;

	return 0;
}