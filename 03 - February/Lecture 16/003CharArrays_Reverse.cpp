#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main() {

	char str[] = "hello";

	cout << "Original string : " << str << endl;

	int i = 0;
	int j = strlen(str) - 1;

	while(i < j) {
		swap(str[i], str[j]);
		i++;
		j--;
	}

	cout << "Reversed  string after 1st reverse : " << str << endl; 

	// strrev(str)

	int n = strlen(str);

	reverse(str, str+n);

	cout << "Reversed  string after 2nd reverse : " << str << endl; 

	reverse(str+1, str+n);

	cout << "Reversed  string after 3rd reverse : " << str << endl; 

	return 0;
}