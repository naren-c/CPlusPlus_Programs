#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>
class sorting
{
	private:int a[100],n,c,p,i,t;
	public:void getdata();
		void sort();
		void display();
};
void sorting::getdata()
{
	cout<<"How many elements?"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void sorting::sort()
{
	for(p=1;p<n;p++)
	{
		c=p;
		while(c>=1)
		{
			if(a[c]<a[c-1])
			{
				t=a[c];
				a[c]=a[c-1];
				a[c-1]=1;
			}
			c--;
		}
	}
}
void sorting::display()
{
	cout<<"The array after sorting is"<<endl;
	for(i=0;i<n;i++)
	cout<<setw(3)<<a[i];
}
void main()
{
	clrscr();
	sorting x;
	x.getdata();
	x.sort();
	x.display();
	getch();
}