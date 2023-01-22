#include<iostream>
using namespace std;
int cqueue[5];
int front = -1 , rear = -1, n=5;
void insert(int val)
{
	if((front == 0 && rear == n-1) || (front == rear+1))
	{
		cout<<"Queue Overflow\n";
		return ;
	}
	if(front == -1)
	{
		front = 0;
		rear = 0;
	}else{
		if(rear == n-1)
			rear = 0;
			else
			rear = rear + 1; 
		}
		cqueue[rear] = val;
	}
	void delection()
	{
		if(front == -1)
		{
			cout<<"Queue is underflow\n";
			return;
		}
		cout<<"Element deleted from the queue is :" <<cqueue[front]<<endl;
		if (front == rear)
		front = -1;
		rear = -1;
	}
	else
	{
		if (front == n-1)
		front = 0;
		else
		front = front + 1;
	}
}
}
void display()
{
	int f = front , r = rear;
	if (front == -1)
	{
		cout<<"queue is empty\n";
		return;
	}
	cout<<"queue elements are";
	if(f <= r)
	while (f <= r)
	{
		cout<<cque[f]<<" ";
		f++
	}
	f = 0;
	while(f<=r)
	{
		cout<<cqueue[f]<<" ";
		f++
	}
}
cout<<endl;
}
int main()
{
	int ch, val;
	cout<<"insert"<<"\n";
	cout<<"delete"<<"\n";
	cout<<"display"<<"\n";
	cout<<"exit"<<"\n";
	do
	{
		cout<<"enter choice :"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"input for insertion: "<<endl;
				cin>>val;
				insert(val);
				break;
				case 2:
					deletion ();
					break;
					case 3:
						display();
						break;
						case 4:
							cout<<"exit\n";
							break;
							default : cout<<"incorrect!\n";
							
	}
}while(ch != 4);
return 0;
	
	
}

