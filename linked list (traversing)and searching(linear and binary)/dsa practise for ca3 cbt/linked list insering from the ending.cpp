#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;
};
void insert(Node** head , char val)
{
    Node* newNode = new Node();
    newNode->val = val;
    newNode->next = NULL;
    if(*head == NULL)
    {
        *head = newNode;
        
    }
    else
    {
    Node* anoNode = *head;
while(anoNode->next != NULL)
anoNode = anoNode->next;
anoNode->next = newNode;
}
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
    int n;
    char val;
    cout<<"Enter Size : ";
    cin>> n;
    for(int i = 0;i < n;i++)
    {
      cin>>val;
      insert(&head,val);
    }
    display(head);
}