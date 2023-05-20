/*

	Given a binary tree, design an algorithm to check if is a BST or not.

*/

#include<iostream>
#include<climits>

#define ll long long

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

int findMinimum(TreeNode* root) {

	if(root == NULL) {
		// tree is empty
		return INT_MAX;
	}

	while(root->left != NULL) {
		root = root->left;
	}

	return root->val;

}

int findMaximum(TreeNode* root) {

	if(root == NULL) {
		// tree is empty
		return INT_MIN;
	}

	while(root->right != NULL) {
		root = root->right;
	}

	return root->val;
	
}


bool isBST(TreeNode* root) {

	// base case
	if(root == NULL) {
		// assume empty tree is a BST since BST prop. isn't violated
		return true;
	}

	// recursive case

	// 1. ask your friend to check if the leftSubtree is a BST
	bool X = isBST(root->left);

	// 2. ask your friend to check if the rightSubtree is a BST
	bool Y = isBST(root->right);

	// 3. check if the BST property is satisfied at the root node
	bool Z = root->val > findMaximum(root->left) and root->val < findMinimum(root->right) ? true : false;

	return X && Y && Z;

}

class triple {

	public :

	bool isbst;
	int minimum;
	int maximum;

};

triple isBSTEfficient(TreeNode* root) {

	triple t;

	// base case
	if(root == NULL) {
		// assume empty tree is a BST since BST prop. isn't violated
		t.isbst = true;
		t.minimum = INT_MAX;
		t.maximum = INT_MIN;
		return t;
	}

	// recursive case

	// 1. ask your friend to check if the leftSubtree is a BST
	triple tL = isBSTEfficient(root->left);

	// 2. ask your friend to check if the rightSubtree is a BST
	triple tR = isBSTEfficient(root->right);

	// 3. check if the BST property is satisfied at the root node
	bool Z = root->val > tL.maximum and root->val < tR.minimum ? true : false;

	t.isbst = tL.isbst && tR.isbst && Z;
	t.minimum = min({tL.minimum, root->val, tR.minimum});
	t.maximum = min({tL.maximum, root->val, tR.maximum});
	
	return t;

}

bool isBSTRange(TreeNode* root, ll lb, ll ub) {

	// base case
	if(root == NULL) {
		return true;
	}

	// recursive case

	return root->val > lb and root->val < ub       &&
	       isBSTRange(root->left, lb, root->val)   &&
	       isBSTRange(root->right, root->val, ub);

}

int main() {

	TreeNode* root = new TreeNode(10);
	
	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(0);

	isBST(root) ? cout << "BST" << endl :
	              cout << "Not a BST" << endl;


	isBSTEfficient(root).isbst ? cout << "BST" << endl :
	                             cout << "Not a BST" << endl;


	// int lb = INT_MIN;
	// int ub = INT_MAX;

	// ll lb = (ll)INT_MIN - 1;
    // ll ub = (ll)INT_MAX + 1;
    ll lb = LLONG_MIN; // -2^63
    ll ub = LLONG_MAX; // 2^63-1                       

	isBSTRange(root, lb, ub) ? cout << "BST" << endl :
	                           cout << "Not a BST" << endl;


	return 0;
}