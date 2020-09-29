#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<iomanip.h>
#include<math.h>
class foverload
{
	private:float s;
	public:double area(double s)
		{
			return (s*s);
		}
		double area(double l, double b)
		{
			return(l*b);
		}
		double area(double a, double b, double c)
		{
			s=(a+b+c)/2;
			return(sqrt(s*(s-a)*(s-b)*(s-c)));
		}
};
void main()
{
	double x,y,z;
	clrscr();
	foverload f;
	int ans;
	while(1)
	{
	cout<<"enter your choice(1,2 or 3)   ";
	cin>>ans;
	if(ans==1)
	{
		cout<<"enter the side of the square  ";
			cin>>x;
		cout<<"the area of the square is   "<<f.area(x);
	}
	else if(ans==2)
	{
		cout<<"enter the length and breadth   ";
		cin>>x>>y;
		cout<<"the area of the rectangle is  "<<f.area(x,y);
	}
	else if(ans==3)
	{
		cout<<"enter the sides of the triangle  ";
		cin>>x>>y>>z;
		cout<<"the area of the trianle is   "<<f.area(x,y,z);
	}
	else
	{
	cout<<"invalid choice";
		exit(0);
	}
	}
	getch();
}