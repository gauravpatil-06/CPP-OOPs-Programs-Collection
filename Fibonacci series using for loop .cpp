#include<iostream>
using namespace std;
int main()
{
    int f1=0,f2=1,f3,num;
    cout<<"Enter any number:";
    cin>>num;
    cout<<"Fibonacci series="<<endl;
    cout<<f1<<endl;
    cout<<f2<<endl;
    for(int i=1; i<=num-2; i++)
    {
        f3=f1+f2;
        cout<<f3<<endl;
        f1=f2;
        f2=f3;
    }
    return 0;
}