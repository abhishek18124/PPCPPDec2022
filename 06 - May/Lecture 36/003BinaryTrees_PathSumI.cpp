#include<iostream>

using namespace std;

class TreeNode {

	public :

		int val;
		TreeNode* left;
		TreeNode* right;

		TreeNode(int val) {
			this->val = val;
			this->left = NULL;
			this->right = NULL;
		}

};

bool hasPathSum(TreeNode* root, int targetSum) {

	// base case

	if(root == NULL) {
		return false;
	}

	if(root->left == NULL and root->right == NULL) {
		// root node is a leaf node
		if(root->val == targetSum) {
			return true;
		}
		return false;
	}

	// recursive case

	// 1. check in the leftSubtree if there exists a root-to-leaf path whose sum is equal to targetSum-root->val
	bool X = hasPathSum(root->left, targetSum-root->val);

	// 2. check in the rightSubtree if there exists a root-to-left path whose sum is equal to targetSum-root->val
	bool Y = hasPathSum(root->right, targetSum-root->val);

	return X or Y;
}

int main() {

	TreeNode* root = NULL;

	root = new TreeNode(5);
	
	root->left = new TreeNode(4);
	root->left->left = new TreeNode(11);
	root->left->left->left = new TreeNode(7);
	root->left->left->right = new TreeNode(2);
	
	root->right = new TreeNode(8);
	root->right->left = new TreeNode(13);
	root->right->right = new TreeNode(4);
	root->right->right->right = new TreeNode(1);

	int targetSum = 22;

	hasPathSum(root, targetSum) ? cout << "true" << endl :
	                              cout << "false" << endl;

	return 0;
}