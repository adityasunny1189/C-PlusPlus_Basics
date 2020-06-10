vector<int> helper(BinaryTreeNode<int> *root, int k, vector<int> s) {
	if(root == NULL) {
		return;
	}
	if(root->left == NULL && root->right == NULL) {
		if(root->data == k) {
            s.push_back(root->data);
			return s;
		}
	}
    s.push_back(root->data);
	vector<int> l = helper(root->left, k - root->data, s);
	vector<int> r = helper(root->right, k - root->data, s);
}

void depth(BinaryTreeNode<int> *root, int k) {
	if(root == NULL) {
		return;
	}
	if(k == 0) {
		cout << root->data << endl;
		return;
	}
	depth(root->left, k - 1);
	depth(root->right, k - 1);
}

void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) {
    // Write your code here
	if(root->data == node) {
		depth(root, k);
	}

}