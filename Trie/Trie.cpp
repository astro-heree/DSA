#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        this->data = ch;
        for(int i = 0 ; i < 26 ; i++) children[i] = NULL;
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;

    Trie()
    {
        root = new TrieNode('\0');
    }
    void insertUntil(TrieNode* root, string s)
    {
        if(s.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        
        // Assumption that word will be in all Caps
        int index = s[0] - 'A';
        TrieNode* child;

        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(s[0]);
            root->children[index] = child;
        }
        insertUntil(child, s.substr(1));
    }

    void insertWord(string s)
    {
        insertUntil(root, s);
    }

    bool searchUntil(TrieNode* root, string word)
    {
        if(word.size() == 0) return root->isTerminal;

        int index = word[0] - 'A';
        TrieNode* child;

        // Present case
        if(root->children[index] != NULL)
        {
            child = root->children[index];
        } // absent case
        else return false;

        return searchUntil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUntil(root, word);
    }
};

int main()
{
    Trie* t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    cout<<"Present or not: "<<t->searchWord("TIM")<<endl;


    return 0;
}