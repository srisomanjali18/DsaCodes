#include <iostream>
using namespace std;
int main()
{
    int upper_bound , lower_bound , mid , i , a, *b , iteam, location;
    cout<<"enter number of elements in the input values " << " " <<"\n";
    cin>>a;
    b = new int[a];
    cout<<"enter the elements in the list : "<<"\n";
    for(i=0 ; i<a ; i++ )
    {
        cin>>b[i];
    }
    cout<<" enter the number you wants to search "<<"\n";
    cin>>iteam;
    upper_bound = a-1;
    lower_bound = 0;
    mid= (upper_bound + lower_bound)/2;
    while((b[mid]!= iteam) && (lower_bound <=upper_bound))
    {
        if(b[mid]<iteam)
        {
            lower_bound = mid+1;
        }
        else
        {
		
        upper_bound = mid - 1;

    }
mid = (upper_bound + lower_bound)/2;

if(b[mid] == iteam)
{
    location = mid;
    cout<<"number found at the position : "<<"\n";
}
else
{

cout<<"the desired value is not found : "<<"\n";
}
}
}

