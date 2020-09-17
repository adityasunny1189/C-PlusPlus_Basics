#include <bits/stdc++.h>
#include "TrieNode.h"

class Trie {
	TrieNode *root;

public:
	Trie() {
		root = new TrieNode('\0');
	}

	// Insert Word
	void insertWordHelper(TrieNode *root, string word) {
		// Base Case
		if(!word.size()) {
			root -> isTerminal = true;
			return;
		}

		// Small Calculation
		TrieNode *child;
		int index = word[0] - 'a';
		if(root -> children[index]) {
			child = root -> children[index];
		} else {
			child = new TrieNode(word[0]);
			root -> children[index] = child;
		}

		// Recursive Call
		insertWordHelper(child, word.substr(1));
	}

	void insertWord(string word) {
		insertWordHelper(root, word);
	}

	// Search Word
	bool SearchHelper(TrieNode *root, string word) {
		// Base Case
		if(!word.size()) {
			if(root -> isTerminal) {
				return true;
			}
			return false;
		}

		// Small Calculation
		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index]) {
			child = root -> children[index];
		} else {
			return false;
		}

		// Recursive Call
		return SearchHelper(child, word.substr(1)); 
	}

	bool search(string word) {
		return SearchHelper(root, word);
	}

	// Remove Word
	void removeWordHelper(TrieNode *root, string word) {
		if(!word.size()) {
			root -> isTerminal = false;
			return;
		}

		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index]) {
			child = root -> children[index];
		} else {
			return;
		}

		removeWordHelper(child, word.substr(1));

		// Remove the child if not needed
		if(!root -> isTerminal) {
			for(int i = 0; i < 26; i++) {
				if(root -> children[i]) {
					return;
				}
			}
			delete child;
			root -> children[index] = NULL;
		}
	}

	void removeWord(string word) {
		removeWordHelper(root, word);
	}
};