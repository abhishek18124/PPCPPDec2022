/*

given the pre-order traversal of a binary tree, design a recursive algorithm 
to compute its diameter

	  diameter of a binary tree is the length of the longest path between any 
	  two TreeNodes in the binary tree.

Example : Input  : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
          Output : 5

          Input  : 10 20 30 50 -1 -1 -1 40 -1 60 -1 -1 70 -1 -1
          Output : 4
          
          Input  : 10 20 -1 -1 30 40 60 -1 -1 -1 50 -1 70 -1 -1
          Output : 4
          
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

int computeHeight(TreeNode* root) {

	// base case
	if(!root) { // root == NULL
		// height of empty tree is -1
		return -1;
	}

	// recursive case

	// 1. ask your friend for the height of the leftSubtree
	int X = computeHeight(root->left);

	// 2. ask your friend for the height of the rightSubtree
	int Y = computeHeight(root->right);

	return 1 + max(X, Y);

}

// time : O(n^2)

int computeDiameter(TreeNode* root) {

	// base case

	if(root == NULL) {
		// diameter of an empty tree is zero
		return 0;
	}

	// recursive case

	// 1. compute the diameter of the leftSubtree

	int X = computeDiameter(root->left);

	// 2. compute the diameter of the rightSubtree

	int Y = computeDiameter(root->right);

	// 3. compute the length of the longest path b/w any two nodes that goes through the root node

	int Z = computeHeight(root->left) + computeHeight(root->right) + 2;

	return max({X, Y, Z}); // or max(X, max(Y, Z));

}

class Pair {

	public :

	int height;
	int diameter;

};

// time : O(n)

Pair computeDiameterEfficient(TreeNode* root) {

	Pair p;

	if(root == NULL) {
		// tree is empty
		p.diameter = 0;
		p.height = -1;
		return p;
	}

	// recursive case 

	// 1. ask your friend to compute the diameter of the leftSubtree and also compute its height
	Pair pL = computeDiameterEfficient(root->left);

	// 2. ask your friend to compute the diameter of the rightSubtree and also compute its height
	Pair pR = computeDiameterEfficient(root->right);

	// 3. compute the length of the longest path that goes through the root

	int Z = pL.height + pR.height + 2;

	p.diameter = max({pL.diameter, pR.diameter, Z});
	p.height = 1 + max(pL.height, pR.height);

	return p;

}

// pair<int, int> : first -> diameter second -> height

pair<int, int> computeDiameterEfficient2(TreeNode* root) {

	pair<int, int> p;

	if(root == NULL) {
		// tree is empty
		p.first = 0;
		p.second = -1;
		return p;
	}

	// recursive case 

	// 1. ask your friend to compute the diameter of the leftSubtree and also compute its height
	pair<int, int> pL = computeDiameterEfficient2(root->left);

	// 2. ask your friend to compute the diameter of the rightSubtree and also compute its height
	pair<int, int> pR = computeDiameterEfficient2(root->right);

	// 3. compute the length of the longest path that goes through the root

	int Z = pL.second + pR.second + 2;

	p.first = max({pL.first, pR.first, Z});
	p.second = 1 + max(pL.second, pR.second);

	return p;

}


int main() {

	TreeNode* root = buildTree();

	cout << computeDiameter(root) << endl;

	Pair p = computeDiameterEfficient(root);

	cout << p.diameter << endl;

	pair<int, int> pp = computeDiameterEfficient2(root);

	cout << pp.first << endl;

	return 0;
}