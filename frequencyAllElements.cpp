//Write a program to find the frequency of all elements in an array

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>

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
        cin>>a[i];
    }
    //cout<<"Enter the element to be searched"<<endl;
    //cin>>se;
}
void frequency::findfrequency()
{
    int j,l,k = 0,flag;
    int b[10];
    for(j=0;j<n;j++)
    {
        se = a[j];
        count = 0;
        flag = 0;
        for(l = 0; l < k; l++)
        {
           if(b[l] == a[j])
           {
               flag = 1;
               break;
           }
        }
        if(flag) continue;
        for(i=j;i<n;i++)
        {
            if(a[i]==se)
            count++;
        }
        b[k++] = se;
        cout << se << ":" << count << endl;
    }
}
void frequency::display()
{
    //if(count>0)
      //  cout<<"Frequency of"<<se<<"is"<<count<<endl;
        //else
        //cout<<se<<"does not exist"<<endl;
}
/* int main()
{
    frequency x;
    x.getdata();
    x.findfrequency();
    x.display();
    getch();
} */