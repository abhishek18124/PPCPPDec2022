#include<iostream>

using namespace std;

class ListNode {

	public :

		int val;
		ListNode* next;

		ListNode(int val) {
			this->val = val;
			this->next = NULL;
		}

};


void insertAtHead(ListNode*& head, int val) {
	
	ListNode* n = new ListNode(val);
	n->next = head;
	head = n;

}

void printLinkedList(ListNode* head) {
	
	while(head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	
	cout << endl;

}

int computeLengthIterative(ListNode* head) {

	int count = 0;

	while(head != NULL) {
		count++;
		head = head->next;
	}

	return count;

}

int computeLengthRecursive(ListNode* head) {

	// base case
	if(head == NULL) {
		// LL is empty
		return 0;
	}

	// recursive case

	// 1. compute the length of the subList that starts from the node which comes after the head node 

	int X = computeLengthRecursive(head->next);

	return 1+X;

}

int main() {

	ListNode* head = NULL; // initially, linkedList empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	cout << computeLengthIterative(head) << endl;

	cout << computeLengthRecursive(head) << endl;

	return 0;
}