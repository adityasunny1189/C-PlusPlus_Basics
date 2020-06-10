int lcaInBST(BinaryTreeNode<int>* root , int val1 , int val2){
    // Write your code here
	if(root == NULL) {
        return -1;
    }
    else if(val1 == val2) {
        return val1;
    }
    else if((val1 >= root->data && val2 < root->data) || (val1 <= root->data && val2 > root->data)) {
        return root->data;
    }
    else if(val1 < root->data && val2 < root->data) {
    	return lcaInBST(root->left, val1, val2);
    }
    else {
    	return lcaInBST(root->right, val1, val2);
    }
}
