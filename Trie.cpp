#include<bits/stdc++.h>
using namespace std;
struct Trie
{
    Trie *children[26];
    bool isleaf;
};
Trie* getNode()
{
    Trie *newNode = new Trie;
    for(int i=0;i<26;i++)
    {
        newNode->children[i]=NULL;
    }
    newNode->isleaf=false;
    return newNode;
}
void insert(Trie *root,string key)
{
    for(int i=0;i<key.size();i++)
    {
        int index=key[i] - 'a';
        if(root->children[index]==NULL)
        {
            Trie *newNode = getNode();
            root->children[index]=newNode;
        }
        root=root->children[index];
    }
    root->isleaf=true;
}
//void search(Trie)
void show(Trie *root)
{
    for(int i=0;i<26;i++)
    {
        if(root->children[i]!=NULL)
        {
            char c='a'+i;
            cout<<c;
            show(root->children[i]);
        }
    }
}
bool search(Trie *root,string key)
{
    int i,index;
    for( i=0;i<key.size()-1;i++)
    {
        index=key[i] - 'a';
        if(root->children[index]==NULL)
            return false;
            root=root->children[index];
    }
    index=key[i] - 'a';
    if(root->children[index]->isleaf == true)
        return true;
    return false;
}
int main()
{
    Trie *root;
    root=getNode();
    insert(root,"gurchet");
    insert(root,"singh");
    insert(root,"gurchetvirk");
    //show(root);
    cout<<search(root,"gurchetvirk");
}
