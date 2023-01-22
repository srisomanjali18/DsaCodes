#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
node *insert(node **head , int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = NULL;  
    if(*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        node *lastNode = *head;
        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        lastNode->next =newNode;
    }
    return *head;
}
int deletion(node **head)
{
    node *prev = *head;
    *head = (*head)->next;
    int deletedData = prev->data;
    delete (prev);
    return deletedData;
}
int deleteN(node **head , int pos)
{
    node * prev , *current;
    int deletedData = -1;
    if(pos == 1)
    {
        prev = *head;
        *head = (*head)->next;
        deletedData = prev->data;
        delete(prev);
    }
    else{
        current = *head;
        prev = NULL;
        for(int i=0; i<(pos-1) && current; i++)
        {
            prev = current;
            current = current->next;
        }
          if (current)
        {
            prev->next = current->next;
            deletedData = current->data; // Storing value of deleted node
        }
    }
     
      return deletedData;
  
}
void display(node *head)
{
    node *temp =head;
    while(temp != NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL;
    int n, val;
    cout << "Enter Size : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insert(&head, val);
    }
    display(head);
        // Deleting 1st node
    cout << "\nDeleting Only First Node '" << deletion(&head) << "' From Link List" << endl;
    display(head);
    // Deleting nth node
    cout << "\nDeleting 4th Node '" << deleteN(&head,4) << "' From Link List" << endl;
    display(head);

    cout << "\nDeleting 1st Node '" << deleteN(&head,1) << "' From Link List" << endl;
    display(head);

}
