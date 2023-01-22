#include<iostream>
using namespace std;
int main()
{
    int arr[50], i, b, c, d, e;
    cout<<"Enter the Size for Array: ";
    cin>>d;
    cout<<"Enter "<<d<<" Array Elements: ";
    for(i=0; i<d; i++){
        cin>>arr[i];}
    cout<<"\nEnter Element to Insert: ";
    cin>>b;
    cout<<"At Which Position ? ";
    cin>>c;
   
    arr[c-1] = b;
   
    cout<<"\nThe New Array is:" <<"\n";
    for(i=0; i<d; i++){
        cout<<arr[i]<<"  ";
       
		}   
        cout<<"enter the position to be deleted : "<<"\n";
        cin>> e;
        for(int i=e-1 ; i<d ; i++)
        {
		
        arr[i] = arr[i+1];
    }
     d = d-1;
	 for(int i=0 ; i<d; i++)
	 {
	 	cout<<arr[i];
		}   
    
    return 0;
}