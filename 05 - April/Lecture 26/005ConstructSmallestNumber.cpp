#include<iostream>

using namespace std;

bool used[10] = {false}; // to track the digits used in the construction of the  
                         // smallest number corresponding to the given pattern.

bool flag = false; // assume num not yet found

void construct(string pattern, string& num, int i) {

	// base case

	if(pattern[i] == '\0') { // or num.size() == pattern.size()+1 
		cout << num << endl;
		flag = true;
		return;
	}

	// recursive case

	if(num == "") {
		// decide the first digit of 'num'
		for(int j=1; j<=9; j++) {
			used[j] = true;
			num.push_back(j+'0');
			construct(pattern, num, i);

			if(flag == true) return;

			used[j] = false;
			num.pop_back(); // backtracking step
		}

		return;
	}

	int x = num.back()-'0'; // num[num.size()-1]-'0'
	if(pattern[i] == 'I') {

		for(int j=x+1; j<=9; j++) {
			if(used[j] == false) {
				num.push_back(j+'0');
				used[j] = true;
				construct(pattern, num, i+1);

				if(flag == true) return;

				used[j] = false; // back-tracking step
				num.pop_back();  // back-tracking step
 			}
		}

	} else { // pattern[i] == 'D'

		for(int j=1; j<=x-1; j++) {
			if(used[j] == false) {
				num.push_back(j+'0');
				used[j] = true;
				construct(pattern, num, i+1);

				if(flag == true) return;

				used[j] = false; // back-tracking step
				num.pop_back();  // back-tracking step
			}
		}
	}
}

int main() {

	string pattern = "DIID";
	string num = "";

	construct(pattern, num, 0);

	return 0;
}