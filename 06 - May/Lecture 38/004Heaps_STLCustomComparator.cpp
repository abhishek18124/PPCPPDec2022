/*

	STL implementation of the min_heap data structure with custom comparator.


*/

#include<iostream>
#include<queue>

using namespace std;

class customer {
	public :
	string name;
	int balance;

	customer(string name, int balance) {
		this->name = name;
		this->balance = balance;
	}
};

class myCustomerComparator {

	public :

	/* assume 'a' as the parent of 'b' which is the newly inserted node
	   return true when swap is needed
	   otherwise return false
	*/

	// bool operator()(customer a, customer b) {
	// 	if(b.balance < a.balance) {
	// 		// you need a swap for a minHeap
	// 		return true;
	// 	}
	// 	// you don't a swap
	// 	return false;
	// }

	bool operator()(customer a, customer b) {
		if(b.name > a.name) {
			// you need a swap for a maxHeap
			return true;
		}
		// you don't a swap
		return false;
	}

};

int main() {

	priority_queue<customer, vector<customer>, myCustomerComparator> m;  // minHeap
	
	m.push(customer("saurabh", 1000));
	m.push(customer("shika", 1500));
	m.push(customer("prem", 500));
	m.push(customer("rastogi", 750));
	m.push(customer("shubham", 6000));
	m.push(customer("abhishek", 100));

	cout << m.size() << endl;

	while(!m.empty()) {
		customer c = m.top();
		cout << c.name << endl;
		// cout << m.top().name << " ";
		m.pop();
	}

	cout << endl;

	cout << m.size() << endl;

	return 0;
}