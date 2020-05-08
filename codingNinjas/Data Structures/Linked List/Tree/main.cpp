#include<iostream>
#include<queue>
#include "TreeNode.h"
using namespace std;

//----------------------------------------------------------->Taking input level wise good approach
TreeNode<int> *takeInputLevelWise() {
	int rootData;
	cout << "Enter the root data" << endl;
	cin >> rootData;
	TreeNode<int> *root = new TreeNode<int>(rootData);
	queue<TreeNode<int> *> pendingNode;
	pendingNode.push(root);
	while(pendingNode.size() != 0) {
		TreeNode<int> *front = pendingNode.front();
		pendingNode.pop();
		int numChild;
		cout << "Enter the number of child of " << front -> data << endl;
		cin >> numChild;
		for(int i = 0; i < numChild; i++) {
			cout << "Enter the " << i << "th child of " << front -> data << endl;
			int childData;
			cin >> childData;
			TreeNode<int> *child = new TreeNode<int>(childData);
			front -> children.push_back(child);
			pendingNode.push(child);
		}
	}
	return root;
}

//----------------------------------------------------------->Printing Nodes level wise in order
void printTreeLevelWise(TreeNode<int> *root) {
	queue<TreeNode<int> *> pendingNode;
	pendingNode.push(root);
	while(pendingNode.size() != 0) {
		TreeNode<int> *front = pendingNode.front();
		pendingNode.pop();
		cout << front -> data << ":";
		for(int i = 0; i < front -> children.size(); i++) {
			if(i == front -> children.size() - 1) {
				cout << front -> children[i] -> data;
				pendingNode.push(front -> children[i]);
				break;
			}
			cout << front -> children[i] -> data << ",";
			pendingNode.push(front -> children[i]);
		}
		cout << endl;
	}
}

//----------------------------------------------------------->Taking Input Recursive way not so good.
TreeNode<int> *takeInput() {
	int n;
	cout << "Enter the data: " << endl;
	cin >> n;
	TreeNode<int> *root = new TreeNode<int>(n);
	int no;
	cout << "Enter the no of child of " << n << endl;
	cin >> no;
	for(int i = 0; i < no; i++) {
		TreeNode<int> *child = takeInput();
		root -> children.push_back(child);
	}
	return root;
}

//------------------------------------------------------------>Printing Tree Recursively
void PrintTree(TreeNode<int> *root) {
	if(root == NULL) {
		return;
	}
	cout << root -> data << ":";
	for(int i = 0; i < root -> children.size(); i++) {
		cout << root -> children[i] -> data << ",";
	}
	cout << endl;
	for(int i = 0; i < root -> children.size(); i++) {
		PrintTree(root -> children[i]);
	}
}

int main() {
	/*
	TreeNode<int> *root = new TreeNode<int>(1);
	TreeNode<int> *node1 = new TreeNode<int>(2);
	TreeNode<int> *node2 = new TreeNode<int>(3);
	root -> children.push_back(node1);
	root -> children.push_back(node2);
	*/
	// TreeNode<int> *root = takeInput();
	TreeNode<int> *root = takeInputLevelWise();
	//PrintTree(root);
	printTreeLevelWise(root);
}
