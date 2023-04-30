#include<iostream>
#include<stack>

using namespace std;

// space : O(n) due to minStack
// hw : try to do this is O(1) space w/o using minStack

class custom_stack {

	stack<int> main_stack;
	stack<int> min_stack;

	public : 

		void push(int data) {
			main_stack.push(data);
			if(min_stack.empty() || data <= min_stack.top()) {
				min_stack.push(data);
			}
		}

		void pop() {
			if(main_stack.empty()) {
				// custom stack is empty
				return;
			}

			int temp = main_stack.top();
			main_stack.pop();

			if(min_stack.top() == temp) {
				min_stack.pop();
			}
		}

		int size() {
			return main_stack.size();
		}

		bool empty() {
			return main_stack.empty();
		}

		int top() {
			return main_stack.top();
		}

		int getMin() {
			return min_stack.top();
		}

};

int main() {

	custom_stack cs;

	cs.push(10);

	cout << "top : " << cs.top() << endl;
	cout << "min : " << cs.getMin() << endl;

	cs.push(0);

	cout << "top : " << cs.top() << endl;
	cout << "min : " << cs.getMin() << endl;

	cs.push(0);

	cout << "top : " << cs.top() << endl;
	cout << "min : " << cs.getMin() << endl;

	cs.pop();

	cout << "top : " << cs.top() << endl;
	cout << "min : " << cs.getMin() << endl;

	cs.pop();

	cout << "top : " << cs.top() << endl;
	cout << "min : " << cs.getMin() << endl;


	return 0;
}
