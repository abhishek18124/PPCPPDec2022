
/*
given the pre-order traversal of a binary tree, check if it is height balanced or not

Example 
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: true

	Input : 10 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1
	Output: true

	Input : 10 20 30 -1 -1 -1 -1
	Output: false

*/

#include<iostream>
#include<cmath>

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


TreeNode* buildTree() {

	int val;
	cin >> val;

	// base case

	if(val == -1) {
		// construct an empty tree and return pointer to its root TreeNode
		return NULL;
	}

	// recursive case

	// 1. construct the root val using the first value of the given preOrder traversal

	TreeNode* root = new TreeNode(val);

	// 2. ask your friend to construct the leftSubtree from the preOrder traversal of the leftSubtree

	root->left = buildTree();

	// 3. ask your friend to construct the rightSubtree from the preOrder traversal of the rightSubtree

	root->right = buildTree();
	
	return root;

}

class Pair {

	public :

	int height;
	bool isBalanced;

};

// time : O(n)

Pair checkHeightBalanced(TreeNode* root) {

	Pair p;

	// base case
	if(root == NULL) {
		// tree is empty
		p.isBalanced = true;
		p.height = -1;
		return p;
	}

	// recursive case

	// 1. ask your friend to check if the leftSubtree is heightBalanced and simulataneously compute its height
	Pair pL = checkHeightBalanced(root->left);

	// 2. ask your friend to check if the rightSubtree is heightBalanced and simulataneously compute its height
	Pair pR = checkHeightBalanced(root->right);

	// 3. check if the heightBalance property is satisfied at the root node
	bool Z = abs(pL.height-pR.height) <= 1 ? true : false;

	p.isBalanced = pL.isBalanced && pR.isBalanced && Z;
	p.height = max(pL.height, pR.height) + 1;

	return p;

}


int main() {

	TreeNode* root = buildTree();

	Pair p = checkHeightBalanced(root);

	p.isBalanced ? cout << "heightBalanced" << endl :
	               cout << "not heightBalanced" << endl;

	return 0;
}