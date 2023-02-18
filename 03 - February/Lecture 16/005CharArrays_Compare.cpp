#include<iostream>
#include<cstring>

using namespace std;

int compareString(char* str1, char* str2) {

	int m = strlen(str1);
	int n = strlen(str2);

	int i = 0; // to iterate over str1
	int j = 0; // to iterate over str2

	while(i < m and j < n) {

		if(str1[i] > str2[j]) {
			// str1 > str2
			return 1;
		} else if(str2[j] > str1[i]) {
			// str2 > str1
			return -1;
		} else {
			i++;
			j++;
		}

	}

	if(str1[i] == '\0' and str2[j] == '\0') {
		// str is equal to str2
		return 0;
	}

	if(str1[i] == '\0') {
		// str2 > str1
		return -1;
	}

	// if(str2[j] == '\0') {
	// 	// str1 > str2, why ? len(str1) > len(str2)
	// 	return 1;
	// }

	// str1 > str2, why ? len(str1) > len(str2)
	return  1;

}

int main() {

	char str1[] = "abcz";
	char str2[] = "abczz";

	// int result = compareString(str1, str2);
	int result = strcmp(str1, str2);

	if(result == 0) {
		cout << str1 << " is equal to " << str2 << endl;
	} else if(result > 0) {
		cout << str1 << " is greater than " << str2 << endl;
	} else {
		cout << str2 << " is greater than " << str1 << endl;
	}


	return 0;
}