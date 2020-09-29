//Write a program to find the frequency of an element in an array
#include <iostream>
#include <conio>
#include <iomanip>
#include <stdlib>

using namespace std;

class frequency
{
        private:int a[100],se,count,n,i;
        public:void getdata();
            void findfrequency();
            void display();
};
void frequency::getdata()
{
    cout<<"How many elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i]
    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>se;
}
void frequency::findfrequency()
{
    count=0;
    for(i=o;i<n;i++)
    {
        if(a[i]==se)
        count++;
    }
}
void frequency::display()
{
    if(count>0)
        cout<<"Frequency of"<<se<<"is"<<count<<endl;
        else
        cout<<se<<"does not exist"<<endl;
}
void main()
{
    clrscr();
    frequency x;
    x.getdata();
    x.findfrequency();
    x.display();
    getch();
}