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

// time : O(1)

void insertAtHead(ListNode*& head, int val) {

	// 1. create a new node with the given 'val' on the heap
	ListNode* n = new ListNode(val);

	// 2. update the next field of the newly created node such that it points to the head node of LL
	n->next = head;

	// 3. make the newly created node as the new head of the LL
	head = n;

}

// // time : O(1)

// ListNode* insertAtHead(ListNode*& head, int val) {

// 	// 1. create a new node with the given 'val' on the heap
// 	ListNode* n = new ListNode(val);

// 	// 2. update the next field of the newly created node such that it points to the head node of LL
// 	n->next = head;

// 	// 3. make the newly created node as the new head of the LL
// 	head = n;

// 	return head;

// }

void printLinkedList(ListNode* head) {

	while(head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;

}

int main() {

	// ListNode* ptr = new ListNode(10);

	// cout << (*ptr).val << endl;
	// cout << ptr->val << endl;


	ListNode* head = NULL; // intially, LL is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	insertAtHead(head, 0);

	// head = insertAtHead(head, 50);
	// head = insertAtHead(head, 40);
	// head = insertAtHead(head, 30);
	// head = insertAtHead(head, 20);
	// head = insertAtHead(head, 10);
	// head = insertAtHead(head, 0);
	
	printLinkedList(head);

	printLinkedList(head);

	return 0;
}