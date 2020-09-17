#include <string>
#include <vector>
class TrieNode {
	public :
	char data;
	TrieNode **children;
	bool isTerminal;

	TrieNode(char data) {
		this -> data = data;
		children = new TrieNode*[26];
		for(int i = 0; i < 26; i++) {
			children[i] = NULL;
		}
		isTerminal = false;
	}
};

class Trie {
	TrieNode *root;

	public :
	int count;

	Trie() {
		this->count = 0;
		root = new TrieNode('\0');
	}

	bool insertWord(TrieNode *root, string word) {
		// Base case
		if(word.size() == 0) {
			if (!root->isTerminal) {
				root -> isTerminal = true;
				return true;	
			} else {
				return false;
			}
		}

		// Small Calculation
		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			child = new TrieNode(word[0]);
			root -> children[index] = child;
		}

		// Recursive call
		return insertWord(child, word.substr(1));
	}

	// For user
	void insertWord(string word) {
		if (insertWord(root, word)) {
			this->count++;
		}
	}
    
    void search(TrieNode *root, string word, string prev) {
        if(!word.size()) {
        	prev += root -> data;
            if(root -> isTerminal) {
            	cout << prev << endl;
            }
            for(int i = 0; i < 26; i++) {
                if(root -> children[i]) {
                    search(root -> children[i], "", prev);
                }
            }
            return;
        }
        
        int index = word[0] - 'a';
        prev += root -> data;
        TrieNode *child;
        if(root -> children[index]) {
            child = root -> children[index];
        } else {
        	return;
        }
        
        return search(child, word.substr(1), prev);
    }
    
    void autoComplete(vector<string> input, string pattern) {
        for(auto it = input.begin(); it != input.end(); it++) {
            string word = *it;
            insertWord(root, word);
        }
        string prev = "";
        search(root, pattern, prev);
    }
 
};
