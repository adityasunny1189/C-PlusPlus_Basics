#include <string>
#include <vector>

class TrieNode
{
public:
    char data;
    TrieNode **children;
    bool isTerminal;
    int childCount;

    TrieNode(char data)
    {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
        childCount = 0;
    }
};

class Trie
{
    TrieNode *root;

public:
    int count;

    Trie()
    {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool add(TrieNode *root, string word)
    {
        // Base case
        if (word.size() == 0)
        {
            if (!root->isTerminal)
            {
                root->isTerminal = true;
                return true;
            }
            else
            {
                return false;
            }
        }

        // Small Calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
            root->childCount++;
        }

        // Recursive call
        return add(child, word.substr(1));
    }

    // For user
    void add(string word)
    {
        if (add(root, word))
        {
            this->count++;
        }
    }

    /*..................... Palindrome Pair................... */
    bool search(TrieNode *root, string word) {
		// Base Case
		if(!word.size()) {
			return true;
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
		return search(child, word.substr(1)); 
	}

    bool isPalindromePair(vector<string> words)
    {
        for(auto it = words.begin(); it != words.end(); it++) {
            string word = *it;
            if(search(root, word)) {
                return true;
            }
            add(root, word);
            reverse(word.begin(), word.end());
            if(search(root, word)) {
                return true;
            }
            add(root, word);
        }
        return false;
    }

};