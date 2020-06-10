#include<string>
void helper(BinaryTreeNode<int> *root, int k, vector<int> s) {
	if(root == NULL) {
		return;
	}
	if(root->left == NULL && root->right == NULL) {
		if(root->data == k) {
            s.push_back(root->data);
			for(int i = 0; i < s.size(); i++) {
                cout << s[i] << " ";
            }
            cout << endl;
            return;
		}
	}
    s.push_back(root->data);
	helper(root->left, k - root->data, s);
	helper(root->right, k - root->data, s);
}

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
    // Write your code here
    vector<int> str;
	helper(root, k, str);
}
