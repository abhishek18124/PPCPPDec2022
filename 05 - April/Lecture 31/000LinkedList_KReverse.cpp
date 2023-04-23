#include<iostream>

using namespace std;

class ListNode {
public:

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
	
	while(head) { 
		cout << head->val << " ";
		head = head->next;
	}
	
	cout << endl;

}

ListNode* kReverse(ListNode* head, int k) {

	// base case

	if(head == NULL) {
		// LL is empty
		return NULL;
	}

	// recursive case

	// 1. reverse the first-k nodes of the given LL
	ListNode* cur = head;
	ListNode* prev = NULL;
	int i = 1;

	while(cur != NULL and i <= k) {
		ListNode* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
		i++;
	}

	// 2. recursively k-reverse the remaining n-k nodes of the given LL

	ListNode* headFromMyFriend = kReverse(cur, k);
	head->next = headFromMyFriend;

	// head->next = kReverse(cur, k);
	
	return prev;


}

int main() {

	ListNode* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	int k = 2;

	head = kReverse(head, k);

	printLinkedList(head);

	return 0;
}