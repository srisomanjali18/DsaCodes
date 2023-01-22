#include<iostream>
using namespace std;
int main()
{
    int i , elem, j , tot , arr[50];
    cin>>tot;
    for(i=0 ; i<tot ; i++)
    {
        cin>>arr[i];
    }
    cin>>elem;
    for(i = 0 ; i<tot ;i++)
    {
         if(arr[i] == elem)
    {
        for(j=i ; j<(tot-1) ; j++)
        {
            arr[j] = arr[j+1];
        }
        tot--;
    }
}
for(i=0 ; i<tot ; i++)
{
    cout<<arr[i];
}
return 0;
    }