#include<iostream>

using namespace std;

template <typename T>
class ListNode {
public:

	T val;
	ListNode<T>* next;

	ListNode(T val) {
		this->val = val;
		this->next = NULL;
	}

};

template <typename T>
class forward_list {

	ListNode<T>* head;
	int  count;

	public : 

		forward_list() {
			head = NULL;
			count = 0;
		}

		void push_front(T val) {
			ListNode<T>* temp = new ListNode<T>(val);
			temp->next = head;
			head = temp;

			count++;
		}

		void pop_front() {
			if(head == NULL) {
				// LL is empty
				return;
			}

			ListNode<T>* temp = head->next;
			delete head;
			head = temp;

			count--;
		}

		int size() {
			return count;
		}

		bool empty() {
			return head == NULL; // or count == 0
		}

		T front() {
			return head->val;
		}

		void traverse() {
			ListNode<T>* temp = head;
			while(temp != NULL) {
				cout << temp->val << " ";
				temp = temp->next;
			}
			cout << endl;
		}

};

int main() {

	forward_list<int> fw;

	fw.push_front(50);
	fw.push_front(40);
	fw.push_front(30);
	fw.push_front(20);
	fw.push_front(10);

	cout <<  "head->val : " << fw.front() << endl;

	fw.traverse();

	cout << "size : " << fw.size() << endl;

	fw.pop_front();
	fw.pop_front();

	cout <<  "head->val : " << fw.front() << endl;

	fw.traverse();

	cout << "size : " << fw.size() << endl;

	fw.pop_front();
	fw.pop_front();
	fw.pop_front();

	fw.empty() ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}


