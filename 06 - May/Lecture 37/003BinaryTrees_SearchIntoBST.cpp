/*

	Given a BST and a key, design an algorithm to search for the key in the BST.	

	Output "true" is key is found otherwise output "false".

*/

#include<iostream>

using namespace std;

class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};

bool search(TreeNode* root, int key) {

	// base case
	if(root == NULL) {
		// tree is empty, how can it contain the key
		return false;
	}

	// recursive case

	if(key == root->val) {
		// you've found the node whose value matches the given key
		return true;
	} else if(key < root->val) {
		// recursively search for the key in the leftSubtree which is a BST
		return search(root->left, key);
	} else { // key > root->val
		// recursively search for the key in the rightSubtree which is a BST
		return search(root->right, key);
	}

}

int main() {

	TreeNode* root = new TreeNode(10);
	
	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(17);

	search(root, 20) ? cout << "true" << endl :
	                   cout << "false" << endl;
	
	return 0;
}


