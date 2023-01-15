#include<iostream>
#include<bitset>

using namespace std;

int main() {

	int a = 25;
	int b = 19;

	cout << "a&b : " << (a&b) << endl;
	cout << "a|b : " << (a|b) << endl;
	cout << "a^b : " << (a^b) << endl;
	cout << "~a  : " << (~a)  << endl;

	cout << bitset<32>(a) << endl;
	cout << bitset<32>(~a) << endl;

	a = 1;

	cout << "a<<1 : " << (a<<1) << endl;
	cout << "a<<1 : " << (a<<2) << endl;
	cout << "a<<1 : " << (a<<3) << endl;

	a = 8;

	cout << "a<<1 : " << (a>>1) << endl;
	cout << "a<<1 : " << (a>>2) << endl;
	cout << "a<<1 : " << (a>>3) << endl;



	return 0;
}