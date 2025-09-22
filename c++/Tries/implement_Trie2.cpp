/*
1804. Implement Trie II (Prefix Tree)

Medium 30216 Add to List 10 Share

A trie (pronounced as "try") or prefix tree is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spelichecker.

Implement the Trie class:

Trie() Initializes the trie object.

void insert(String word) Inserts the string word into the trie.
int countWords EqualTo(String word) Returns the number of instances of the string word in the trie.
int countwordsStartingWith(String prefix) Returns the number of strings in the trie that have the string prefix as a prefix.

void eraselString word) Erases the string word from the trie.*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    char data;
    bool terminal;
    unordered_map<char, Node*> children;
    int countWordEndingHere;
    int countWordsStarting;

    Node(char data){
        this->data = data;
        this->terminal = false;
        this->countWordEndingHere = this->countWordsStarting = 0;
    }
};

class Tries{
    public :
    Node* root ;
    Tries(){
        root = new Node('\0');

    }
    void insert(string word){
        Node* curr = root;
        for (int i = 0; i < word.size(); i++)
        {
            char ch = word[i];
            if(curr->children.count(ch)){
                curr = curr->children[ch];
                 curr->countWordsStarting++;
            }else{
                Node* child = new Node(ch);
                curr->children[ch] = child;
                curr = curr->children[ch];
                curr->countWordsStarting++;
            }
        }
        curr->terminal = true;
        curr->countWordEndingHere++;
    }
    int countWordsEqualTo(string word){
         Node* curr = root;
        for (int i = 0; i < word.size(); i++)
        {
            char ch = word[i];
            if(curr->children.count(ch)){
                curr = curr->children[ch];
            }else{
              return 0;
            }
        }
        return curr->countWordEndingHere;
    }

    int countWordStartWith(string prefix){
         Node* curr = root;
        for (int i = 0; i < prefix.size(); i++)
        {
            char ch = prefix[i];
            if(curr->children.count(ch)){
                curr = curr->children[ch];
            }else{
              return 0;
            }
        }
        return curr->countWordsStarting;
    }

    void erase(string word){
        Node* curr = root;
        for (int i = 0; i < word.size(); i++)
        {
            char ch = word[i];
            curr = curr->children[ch];
            curr->countWordsStarting--;
        }
        curr->countWordEndingHere--;
    }
};
int main()
{
return 0;
}