#include<iostream>
using namespace std;
void TOH(int n , char beg , char aux , char end)
{

if(n == 1)
{
	cout<<"starts at "<<n<<" from "<<beg<<" to "<<end<<"\n";
	return;
}
TOH(n-1 , beg , end , aux);
cout<<"starts at "<<n <<" from "<<beg<<" to "<<end<<"\n";
TOH(n-1 , aux , beg , end);
}
int main()
{
	int n;
	cout<<"enter the number "<<endl;
	cin>>n;
	TOH(n,'A','B','C');
	return 0;
}