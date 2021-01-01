#include<bits/stdc++.h>
using namespace std;

struct Tree
{
    int data;
    Tree *left;
    Tree *right;
}*root,*temp,*leftT,*rightT;

void preOrder(Tree *root)
{
    if(root==NULL)
        return;
    else
    {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void levelOrder(Tree *root)
{
    queue<Tree*> q;
    q.push(root);
    while(!q.empty())
    {
        root=q.front();
        q.pop();
        cout<<root->data<<" ";
        if(root->left!=NULL)
            q.push(root->left);
        if(root->right!=NULL)
            q.push(root->right);
    }
}

int height(Tree * root)
{
    if(root == NULL)
        return 0;
    else
    {
        int lheight=height(root->left);
        int rheight=height(root->right);
        if(lheight > rheight)
            return lheight+1;
        return rheight +1;
    }
}
int main()
{
    queue<Tree*> q;
    int i,item;
    cout<<"Enter root :";
    cin>>i;
    root=new Tree;
    root->data=i;
    root->left=NULL;
    root->right=NULL;
    q.push(root);
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<<" :";
        cin>>i;
        if(i!=-1)
        {
            leftT=new Tree;
            leftT->data=i;
            leftT->left=NULL;
            leftT->right=NULL;
            q.push(leftT);
            temp->left=leftT;
        }
        cout<<"Enter the right child of "<<temp->data<<" :";
        cin>>i;
        if(i!=-1)
        {
            rightT=new Tree;
            rightT->data=i;
            rightT->left=NULL;
            rightT->right=NULL;
            q.push(rightT);
            temp->right=rightT;
        }
    }
    cout<<"Pre Order Traversal :";
    preOrder(root);
    cout<<endl<<"Level Order Traversal :";
    levelOrder(root);
    cout<<endl<<"Height ="<<height(root);
}
