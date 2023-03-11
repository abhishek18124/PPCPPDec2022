#include<iostream>

using namespace std;

class customer {
	public :
		char name[100];
		int age;
		char gender;
		double credits;

	void printCustomerInfo() {
		cout << "\ncustomer information\n";
		cout << "name : " << name << endl;
		cout << "age : " << age << endl;
		cout << "gender : " << gender << endl;
		cout << "credits : " << credits << endl;
	}

};

// void printCustomerInfo(customer c) {
// 	cout << "\ncustomer information\n";
// 	cout << "name : " << c.name << endl;
// 	cout << "age : " << c.age << endl;
// 	cout << "gender : " << c.gender << endl;
// 	cout << "credits : " << c.credits << endl;
// }

int main() {

	customer c1; // object declaration

	cin >> c1.name;
	cin >> c1.age;
	cin >> c1.gender;
	cin >> c1.credits;

	// cout << "\ncustomer information\n";
	// cout << "name : " << c1.name << endl;
	// cout << "age : " << c1.age << endl;
	// cout << "gender : " << c1.gender << endl;
	// cout << "credits : " << c1.credits << endl;

	// printCustomerInfo(c1); // by default class objects are passed by value

	c1.printCustomerInfo();

	customer c2; // object declaration

	strcpy(c2.name, "anmol");
	c2.age = 25;
	c2.gender = 'M';
	c2. credits = 100;

	// cout << "\ncustomer information\n";
	// cout << "name : " << c2.name << endl;
	// cout << "age : " << c2.age << endl;
	// cout << "gender : " << c2.gender << endl;
	// cout << "credits : " << c2.credits << endl;

	// printCustomerInfo(c2);

	c2.printCustomerInfo();

	return 0;
}