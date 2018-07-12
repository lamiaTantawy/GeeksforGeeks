//
//  main.cpp
//  Finding middle element in a linked list
//
//  Created by Lamia Tantawy on 7/12/18.
//  Copyright © 2018 Lamia Tantawy. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
int getMiddle(Node *head)
{
    Node* fast = head;
    Node* slow = head;
    if(head==NULL)
        return -1;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}
void addNode(Node*& head,int value)
{
    if(head==NULL)
    {
        Node* n = new Node;
        n->data = value;
        n->next = NULL;
        head = n;
    }
    else
    {
        Node* curr = head;
        while(curr->next!=NULL)
        {
            curr = curr->next;
        }
        Node* n = new Node;
        n->data = value;
        n->next = NULL;
        curr->next = n;
    }
}
void show(Node* head)
{
    Node* curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}
int main(int argc, const char * argv[]) {
    int n,T,num;
    
    cin>>T;
    vector<int> v(T);
    for(int t=0;t<T;t++)
    {
        cin>>n;
        Node* head = NULL;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            addNode(head, num);
        }
       // show(head);
        v[t] = getMiddle(head);
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}
