#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;
};
void insert(Node** head , int val)
{
    Node* newNode = new Node();
    newNode->val = val;
    newNode->next = *head;
    *head = newNode;
}
void display(Node* node)
{
    while (node!= NULL)
    {
        cout<<node->val<<" ";
        node = node->next;
    }
}
int main()
{
    Node* head = NULL;
    int n,val;
    cout<<"Enter Size : ";
    cin>> n;
    for(int i = 0;i < n;i++)
    {
      cin>>val;
      insert(&head,val);
    }
    display(head);
}