
#include<bits/stdc++.h>

class checkTree {
public:
	int minimum;
	int maximum;
	bool isBST;
	int height;
};

checkTree helper(BinaryTreeNode<int> *root) {
	if(root == NULL) {
		checkTree ans;
		ans.minimum = INT_MAX;
		ans.maximum = INT_MIN;
		ans.isBST = true;
		ans.height = 0;
		return ans;
	}
	checkTree l = helper(root->left);
	checkTree r = helper(root->right);
    
    checkTree ans;
    if(l.minimum!=INT_MAX)
        ans.minimum=l.minimum;
    else
        ans.minimum=root->data;
    if(r.maximum!=INT_MIN)
        ans.maximum=r.maximum;   
    else
        ans.maximum=root->data;
	if(l.isBST && r.isBST)
    {
        if(root->data > l.maximum && root->data <= r.minimum)
        {
            ans.isBST=true;
            ans.height=max(l.height,r.height)+1;
        }
        else
        {
            ans.isBST=false;
            ans.height=max(l.height,r.height);
        }
    }
    else
    {
        ans.isBST=false;
        ans.height=max(l.height,r.height);
    }
    return ans;

}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here
	checkTree ans = helper(root);
	return ans.height;
	
}
