int lcaBinaryTree(BinaryTreeNode <int>* root , int val1, int val2){
    // Write your code here
	if(val1 == root->data || val2 == root->data) {
		return root->data;
	}
	int lcal = lcaBinaryTree(root->left, val1, val2);
	int lcar = lcaBinaryTree(root->right, val1, val2);
	if(lcal == NULL && lcar) {
		return lcar;
	}
	else if(lcar == NULL && lcal) {
		return lcal;
	}
	else if(lcal == NULL && lcar == NULL) {
		return NULL;
	}
	else {
		return root->data;
	}
}
