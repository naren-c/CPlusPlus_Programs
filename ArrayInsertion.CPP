#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>
class isort
{
	private:int n,i,c,p,a[20],t;
	public:void getdata();
		void sorting();
		void display();
};
void isort::getdata()
{
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void isort::sorting()
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
					a[c-1]=t;
				}
			c--;
		}
	}
}
void isort::display()
{
	cout<<"the array after sorting is";
	for(i=0;i<n;i++)
	cout<<setw(3)<<a[i];
}
void main()
{
	clrscr();
	isort x;
	x.getdata();
	x.sorting();
	x.display();
	getch();
}
