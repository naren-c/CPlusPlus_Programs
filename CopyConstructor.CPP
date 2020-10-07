#include<iostream>

using namespace std; 

class student
{
	private:int rno;
		char name[10];
	public:student();
		student(student &ptr);
		void display();
};
student::student()
{
	rno=100;
       strcpy(name,"naren");
}
student::student(student &ptr)
{
	rno=ptr.rno;
	strcpy(name,ptr.name);
}
void student::display()
{
	cout<<"NAME= "<<name<<endl;
	cout<<"RNO= "<<rno<<endl;
}
/* void main()
{
	//clrscr();
	student s;
	s.display();
	student s1=s;
	s1.display();
	//getch();
} */