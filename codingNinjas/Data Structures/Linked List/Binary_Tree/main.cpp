#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include "PairClass.h"
#include "BinaryTree.h"
using namespace std;

//---------------------------------------------------------------------------->Print Tree Recusively
void printNode(BinaryTreeNode<int> *root) {
	if(root == NULL) {
		return;
	}
	cout << root->data << ":";
	if(root->left != NULL) {
		cout << "L->" << root->left->data;
	}
	if(root->right != NULL) {
		cout << ", R->" << root->right->data;
	}
	cout << endl;
	printNode(root->left);
	printNode(root->right);
}

//----------------------------------------------------------------------------->Print Tree Level Wise
void PrintTreeLevelWise(BinaryTreeNode<int> *root) {
	queue<BinaryTreeNode<int> *> pendingNodes;
	if(root == NULL) {
		return;
	}
	pendingNodes.push(root);
	while(pendingNodes.size() != 0) {
		BinaryTreeNode<int> *front = pendingNodes.front();
		pendingNodes.pop();
		cout << front->data << ":";
		if(front->left != NULL) {
			cout << "L" << front->left->data;
			pendingNodes.push(front->left);
		}
		if(front->right != NULL) {
			cout << ",R" << front->right->data;
			pendingNodes.push(front->right);
		}
		cout << endl;
	}
}

//----------------------------------------------------------------------------->Take Input Level Wise
BinaryTreeNode<int> *takeInputLevelWise() {
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if(rootData == -1) {
		return NULL;
	}
	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
	queue<BinaryTreeNode<int> *> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size() != 0) {
		BinaryTreeNode<int> *front = pendingNodes.front();
		pendingNodes.pop();
		int leftChildData;
		cout << "Enter left child of " << front->data << endl;
		cin >> leftChildData;
		if(leftChildData != -1) {
			BinaryTreeNode<int> *leftChild = new BinaryTreeNode<int>(leftChildData);
			front->left = leftChild;
			pendingNodes.push(leftChild);
		}
		int rightChildData;
                cout << "Enter right child of " << front->data << endl;
                cin >> rightChildData;
                if(rightChildData != -1) {
                        BinaryTreeNode<int> *rightChild = new BinaryTreeNode<int>(rightChildData);
                        front->right = rightChild;
                        pendingNodes.push(rightChild);
                }
	}
	return root;
}

//----------------------------------------------------------------------------->Take input Recursively
BinaryTreeNode<int> *takeInput() {
	int rootData;
	cout << "Enter data: " << endl;
	cin >> rootData;
	if(rootData == -1) {
		return NULL;
	}
	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
	BinaryTreeNode<int> *leftChild = takeInput();
	BinaryTreeNode<int> *rightChild = takeInput();
	root->left = leftChild;
	root->right = rightChild;
	return root;
}

// --------------------------------------------------------------------------->Height of a Tree
int height(BinaryTreeNode<int> *root) {
	if(root == NULL) {
		return NULL;
	}

	return 1 + height(root->left) + height(root->right);
}

// --------------------------------------------------------------------------->Make Tree from inorder and preorder
BinaryTreeNode<int> *buildTreeInPre(int *in, int *pre, int inS, int inE, int preS, int preE) {
	if(inS > inE) {
		return NULL;
	}

	int rootData = pre[preS];
	int rootIndex = -1;
	for(int i = inS; i <= inE; i++) {
		if(in[i] == rootData) {
			rootIndex = i;
			break;
		}
	}

	int linS = inS;
	int linE = rootIndex - 1;
	int lpreS = preS + 1;
	int lpreE = linE - linS + lpreS;

	int rinS = rootIndex + 1;
	int rinE = inE;
	int rpreS = lpreE + 1;
	int rpreE = preE;

	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
	root->left = buildTreeInPre(in, pre, linS, linE, lpreS, lpreE);
	root->right = buildTreeInPre(in, pre, rinS, rinE, rpreS, rpreE);
	return root;
}

// --------------------------------------------------------------------------->Make Tree from inorder and postorder
BinaryTreeNode<int> *buildTreeInPost(int *in, int *post, int inS, int inE, int postS, int posE) {
	if(inS > inE) {
		return NULL;
	}
	int rootData = post[postE];
	int rootIndex = -1;
	for(int i = inS; i <= inE; i++) {
		if(in[i] == rootData) {
			rootIndex = i;
			break;
		}
	}

	int linS = inS;
	int linE = rootIndex - 1;
	int lpostS = postS;
	int lpostE = linS - linE + lpostS;

	int rinS = rootIndex + 1;
	int rinE = inE;
	int rpostS = lpostE + 1;
	int rpostE = postE - 1;

	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
	root->left = buildTreeInPost(in, post, linS, linE, lpostS, lpostE);
	root->right = buildTreeInPost(in, post, rinS, rinE, rpostS, rpostE);
	return root;
}

// --------------------------------------------------------------------------->Diameter better approach
PairClass *diameterBetterWay(BinaryTreeNode<int> *root) {
	if(root == NULL) {
		
	}
}

// --------------------------------------------------------------------------->Diameter of a Tree
int diameter(BinaryTreeNode<int> *root) {
	if(root == NULL) {
		return;
	}
	
	int option1 = height(root->left) + height(root->right);
	int option2 = diameter(root->left);
	int option3 = diameter(root->right);
	return max(option1, max(option2, option3));	
}

//---------------------------------------------------------------------------->Main Function
int main() {
	/*
	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
	BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
	BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
	root->left = node1;
	root->right = node2;
	*/
	BinaryTreeNode<int> *root = takeInputLevelWise();
	PrintTreeLevelWise(root);
}
