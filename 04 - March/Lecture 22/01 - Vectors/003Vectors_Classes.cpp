#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class customer {

public:

	string name; 
	int age;
	char gender;
	double credits;
	
	customer(string name, int age, char gender, double credits) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->credits = credits;
	}	
};

/* 
	return 'true' when a swap isn't required.

*/

bool myAgeCompartor(customer c1, customer c2) {
	if(c1.age < c2.age) {
		// we don't need a swap : beause we are soring vector<customer> in the increasing order of their ages
		return true;
	} else {
		// we need a swap
		return false;
	}
}

bool myCreditsCompartor(customer c1, customer c2) {
	if(c1.credits > c2.credits) {
		// we don't need a swap : because we are sorting vector<customer> in the decreasing order of their credits
		return true;
	} else {
		return false;
	}

}

int main() {

	vector<customer> v;

	v.push_back(customer("Krish", 18, 'M', 200));
	v.push_back(customer("Raman", 20, 'M', 400));
	v.push_back(customer("Saksham", 19, 'M', 300));
	v.push_back(customer("Anmol", 22, 'M', 250));
	v.push_back(customer("Deepankar", 21, 'M', 150));

	sort(v.begin(), v.end(), myAgeCompartor);

	for(customer c : v) {
		cout << c.name << " " << c.age << " " << c.gender << " " << c.credits << endl;
	}

	cout << endl;

	sort(v.begin(), v.end(), myCreditsCompartor);


	for(customer c : v) {
		cout << c.name << " " << c.age << " " << c.gender << " " << c.credits << endl;
	}

	return 0;
}