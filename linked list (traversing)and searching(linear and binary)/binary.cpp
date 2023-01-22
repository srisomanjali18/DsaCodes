#include<iostream>
using namespace std;
int main(){
    int upper_bound,lower_bound,mid,i,n,*p,item,location;
    cout<<"ENTER NUMBER OF ELEMENTS IN INPUT LIST "<<" "<<"\n";
    cin>>n;
    p=new int[n];
    cout<<"\n PLEASE ENTER   "<<n<<"  VALUES IN ASCENDING SEQUENCE "<<" "<<"\n";
    for(i=0;i<n;i++){
           cin>>p[i];
    }    
    cout<<"\n NOW ENTER NUMBER YOU WANT TO SEARCH  ";
    cin>>item;
    upper_bound =n-1;
    lower_bound =0;
    mid=(upper_bound+lower_bound)/2;
    while((p[mid]!=item)&&(lower_bound<=upper_bound)){
             if(p[mid]<item){
                    lower_bound=mid+1;
             }
             else{
                    upper_bound=mid-1;
             }
             mid=(upper_bound+lower_bound)/2;
    }        
    if(p[mid]==item){
       location=mid;
       cout<<"\n NUMBER FOUND AT POSITION "<<location+1;
    }  
    else{
    	cout<<" SORRY!! ELEMENT NOT FOUND IN LIST";
	}
}                     
    
