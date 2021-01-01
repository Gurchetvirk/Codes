#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*head=NULL,*newNode,*curr;

void insert(int data)
{
    newNode= new Node;
    newNode->next=NULL;
    newNode->data=data;
    if(head==NULL)
    {
        head=newNode;
        curr=newNode;
        return;
    }
    curr->next=newNode;
    curr=newNode;
    return;
}

void show(Node *head)
{
    while(head!=NULL)
    {
        cout<<" "<<head->data;
        head=head->next;
    }
}

void deleteNode(int item,Node *Head)
{
    if(Head==NULL)
        cout<<"UnderFlow";
    else
    {
        Node *prev=Head;
        if(Head->data==item)
        {
            head=head->next;
        }
        else
        {
            prev=Head;
            Head=Head->next;
            while(Head!=NULL)
            {
                if(Head->data==item)
                {
                    prev->next=Head->next;
                    return;
                }
                prev=Head;
                Head=Head->next;
            }
        }

    }
}

Node *reverse(Node *head)
{
    Node * prev = NULL;
    Node * current = head;
    Node * next;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

void removeDuplicates(Node * head)
{
    vector<int> v;
    vector<int>::iterator i;
    Node *prev=head;
    v.push_back(prev->data);
    head=head->next;
    while(head!=NULL)
    {
        //cout<<"Vector first ="<<v.front()<<" Vector last="<<v.back()<<endl;
        i=find(v.begin(),v.end(),head->data);
        if(i!=v.end())
        {
            prev->next=head->next;
            head=head->next;
            continue;
        }
        v.push_back(head->data);
        prev=prev->next;
        head=head->next;
    }
}

int getNumber(Node *head)
{
    int num=0;
    num=head->data;
    head=head->next;
    while(head!=NULL)
    {
        num=num*10+head->data;
        head=head->next;
    }
    return num;
}

/*int createNew(ix)
{
    if()
}*/
int main()
{
    /*insert(1);
    insert(2);
    insert(3);
    insert(3);
    insert(3);
    insert(4);
    insert(2);
    insert(5);
    show(head);
    //deleteNode(4,head);
    cout<<endl;
    show(head);
    cout<<endl;
    removeDuplicates(head);
    show(head);
    cout<<endl;
    reverse(head);
    show(head);*/

    show(reverse(head));
    /*insert(1);
    insert(9);
    insert(9);
    insert(9);

    int num;
    num=getNumber(head);*/
}
