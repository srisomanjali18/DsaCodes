#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n], temp,i,j ;
    for(i=0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0 ;j<(n-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0 ;i<n ;i++)
    {
        cout<<arr[i];
    }
}
