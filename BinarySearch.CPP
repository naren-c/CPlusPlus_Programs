#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>
class bisearch
{
	private: int i,n,a[30],beg,mid,pos,end,se;
	public:void getdata();
		void search();
		void display();
};
void bisearch::getdata()
{
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the element to be searched";
	cin>>se;
}
void bisearch::search()
{
	beg=0,end=n-1;
	pos=-1;
	while(beg<end)
	{
	mid=(beg+end)/2;
		if(se==a[mid])
		{
			pos=mid;
			break;
		}
		else if(se>a[mid])
		beg=mid+1;
		else
		end=mid-1;
	}
}
void bisearch::display()
{
	if(pos>=0)
	{
		cout<<"search element is found at"<<pos;
	}
	else
	cout<<"search element is not found";
}
void main()
{
	clrscr;
	bisearch x;
	x.getdata();
	x.search();
	x.display();
	getch();
}