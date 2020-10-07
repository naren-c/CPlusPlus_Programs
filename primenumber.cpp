#include<iostream>
using namespace std;
int main()
{
    int p,i,isprime = 1;
    cout<<"Enter a positive integer"<<endl;
    cin>>p;
    //cout << p;
    if(p==1 || p==0)
    {
        cout<<p<<"not a prime number";
    }
    else
    {
        for(i=2;i<=p-1;i++)
        {
            if(p%i==0)
            {
                cout<<p<<"is not a prime number";
                isprime = 0;
                break;
            }
        }
        if(isprime == 1)
            cout<<p<<"is a prime number";
    }
}
