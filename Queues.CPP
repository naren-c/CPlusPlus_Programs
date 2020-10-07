//Developed by Naren
#include<iostream>
#include<stdlib.h>

using namespace std;

#define n 3
class queue
{
	private:int front,rear,count,a[n],i;
	public:queue()
		{
			front=-1;
			rear=-1;
			count=0;
		}
		void enqueue(int x);
		void dequeue();
		void display();
};
void queue::enqueue(int x)
{
	if(rear==n-1)
	{
		cout<<"Queue is empty";
		return;
	}
	if(front==-1)
	{
		front=0;
		rear=0;
	}
	rear++;
	a[rear]=x;
	count++;
	cout<<x<<"   has successfully been added";
}
void queue::dequeue()
{
	if(front==-1)
	{
		cout<<" queue is empty";
		return;
	}
	else
	{
		int de=a[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		front++;
		count--;
		cout<<" item is successfully removed";
	}
}
void queue::display()
{
	if(count>0)
	{
		cout<<"queue contains:";
		for(i=front;i<=rear;i++)
		cout<<a[i];
	}
	else
		cout<<"queue is empty";
}
void main()
{
	queue q;
	int choice,item;
	while(1)
	{
	cout<<"enter your choice"<<endl<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl
	<<"3.Display"<<endl<<"4.Exit";
	cin>>choice;
	switch(choice)
	{
		case 1:cout<<"enter the item to be inserted";
			cin>>item;
			q.enqueue(item);
			break;
		case 2:q.dequeue();
			break;
		case 3:q.display();
			break;
		case 4:exit(0);
		default:cout<<"invalid choice";
	}
	
	}
}