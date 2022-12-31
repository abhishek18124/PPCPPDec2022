#include<iostream>

using namespace std;

int main() {

	int x = 10;

	cout << x << endl;

	{

		int x = 30;

		int y = 20;

		cout << x << " " << y << endl;

		{
			int z = 40;

			cout << x << " " << y << " " << z << endl;
		}
		
	}
	
	return 0;
}