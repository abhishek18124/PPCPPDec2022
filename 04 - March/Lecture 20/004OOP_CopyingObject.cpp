#include<iostream>

using namespace std;

class customer {
	public :
		char name[100];
		int age;
		char gender;
		double credits;

		customer() {
			cout << "\nI am inside default constructor of the customer class\n";
		}

		customer(char* n, int a, char g, double c) {
			cout << "I am inside the parameterised constructor of the customer class" << endl;
			strcpy(name, n);
			age = a;
			gender = g;
			credits = c;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

};

int main() {
	
	customer c1("naruto", 32, 'M', 5000);

	c1.printCustomerInfo();

	customer c2 = c1; // default copy constructor is invoked

	c2.printCustomerInfo();

	customer c3; // defautl constructor is invoked
	c3 = c1; // default copy assignment operator is invoked

	c3.printCustomerInfo();

	return 0;
}