#include<iostream>
using namespace std;
struct nodeType  // structure part
{
    int info;
    nodeType * link;
};
nodeType *first , *newNode, *last , *temp;
nodeType* buildListForward();
int main()
{
    nodeType * current = buildListForward();
    while(current != NULL)  // Traversing
    {
        cout<<current -> info <<" ";
        current = current -> link;

    }
      cout<<"enter an element to srearch: "<<"\n";
      int iteam;
      cin>>iteam;
      temp = first;
       while(temp != NULL && temp->data != iteam)  // Traversing
    {
        current = current -> link;

    }
    if(temp == NULL)
    cout<<" Element Not Found In The Linked List "<< "\n";
    elsecout<<"Element Found In The Linked List  "<<"\n";

    return 0;
}
nodeType* buildListForward() // creating the function (node)
{
    
    int num;
    cout<<"enter a list integer ending with -999"<<"\n"; // -999 is To make programme simple so we are terminating the element
    cin>>num;
    first = NULL;
    while(num != -999){
        newNode = new nodeType; // to allocate memory            
        newNode-> info = num; // assigning data part
        newNode-> link = NULL; // assaingning null to the pointer part
        if (first == NULL)
        {
            first = newNode;
            last = newNode;
        }
        else
        {
            last->link = newNode;
            last = newNode;
        }
        cin>>num;
    } // end while statement
    return first;

}   //end buildListForward