#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>
class deletion
{
	private:int a[20],n,i,pos,de;
	public:void getdata();
		void remove();
		void display();
};
void deletion::getdata()
{
	cout<<"eneter the number of elements";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the position of element to be deleted";
	cin>>pos;
}
void deletion::remove()
{
	if(pos>n-1)
	{
		cout<<"invalid choice";
	}
	else
	{
	de=a[pos];
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	}
}
void deletion::display()
{
	if(pos<=n-1)
	{
	cout<<"the array after deletion"<<endl;
	for(i=0;i<n;i++)
	cout<<setw(3)<<a[i];
	}
}
void main()
{
	clrscr();
	deletion d;
	d.getdata();
	d.remove();
	d.display();
	getch();
}
