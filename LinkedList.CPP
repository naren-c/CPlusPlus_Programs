#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class linklist
{
	private:
		struct node
		{
			int data;
			node *link;
		}*start;
	public:linklist();
		void append(int x);
		void count();
		void display();
};
linklist::linklist()
{
	start=NULL;
}
void linklist::append(int x)
{
	node *nnode;
	nnode=new node;
	nnode->data=x;
	nnode->link=NULL;
	if(start==NULL)
	{
		start=nnode;
		cout<<endl<<x<<"  is inserted as the first node";
	}
	else
	{
		node *tmp=start;
		while(tmp->link!=NULL)
			tmp=tmp->link;
		tmp->link=nnode;
		cout<<endl<<x<<" is appended";
	}
}
void linklist::count()
{
	node *tmp;
	int c=0;
	for(tmp=start;tmp!=NULL;tmp=tmp->link)
		c++;
		cout<<endl<<"number of nodes in the linked list="<<c<<endl;
}
void linklist::display()
{
	if(start==NULL)
	{
		cout<<"linked list is empty";
		return;
	}
	else
	cout<<"linked list contains";
	node *tmp=start;
	while(tmp!=NULL)
	{
		cout<<tmp->data;
		tmp=tmp->link;
	}
}
void main()
{
	clrscr();
	linklist *x=new linklist();
	x->display();
	x->append(5);
	x->count();

	x->display();
	x->append(4);
	x->count();

	x->display();
	x->append(6);
	x->count();
	getch();
}
