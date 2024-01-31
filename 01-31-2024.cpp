// Insert and Search in a Trie
// https://www.geeksforgeeks.org/problems/trie-insert-and-search0651/1

#include<bits/stdc++.h>
using namespace std;

// Alphabet size (# of symbols)
#define ALPHABET_SIZE (26)

// Converts key current character into index
// use only 'a' through 'z' and lower case
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

// trie node
struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];

    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;
};

// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode(void) {
    struct TrieNode *pNode = NULL;

    pNode = (struct TrieNode *) malloc(sizeof(struct TrieNode));

    if (pNode) {
        int i;

        pNode->isLeaf = false;

        for (i = 0; i < ALPHABET_SIZE; i++) pNode->children[i] = NULL;
    }

    return pNode;
}


// } Driver Code Ends
// User function template for C++

class Solution
{
    public:
        //Function to insert string into TRIE.
        void insert(struct TrieNode *root, string key)
        {
            int level;
            int length = key.size();
            int index;
            
            //if not present, we insert key into trie. If the key is prefix 
            //of trie node, we just mark the leaf node.
            struct TrieNode *pCrawl = root;
        
            for (level = 0; level < length; level++) {
                index = CHAR_TO_INDEX(key[level]);
                if (!pCrawl->children[index]) pCrawl->children[index] = getNode();
        
                pCrawl = pCrawl->children[index];
            }
        
            //marking last node as leaf.
            pCrawl->isLeaf = true;
        }
        
        
        //Function to use TRIE data structure and search the given string.
        bool search(struct TrieNode *root, string key) 
        {
            int level;
            int length = key.size();
            int index;
            struct TrieNode *pCrawl = root;
        
            for (level = 0; level < length; level++) 
            {
                index = CHAR_TO_INDEX(key[level]);
                if (!pCrawl->children[index]) 
                return false;
        
                pCrawl = pCrawl->children[index];
            }
            //returning true if key is present else false.
            return (pCrawl != NULL && pCrawl->isLeaf);
        }
};

int main () {
  
   return 0;
}