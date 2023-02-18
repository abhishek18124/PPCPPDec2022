// strlen <= 100 

#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the no. of strings : ";
	cin >> n;

	cin.ignore();

	char inp[101];
	cin.getline(inp, 101);
	// cin >> inp;

	char out[101]; // largest so far string
	strcpy(out, inp);

	for(int i=1; i<=n-1; i++) {
		cin.getline(inp, 101);
		// cin >> inp;
		if(strcmp(inp, out) > 0) {
			strcpy(out, inp);
		}
	}

	cout << out << endl;

	return 0;
}
