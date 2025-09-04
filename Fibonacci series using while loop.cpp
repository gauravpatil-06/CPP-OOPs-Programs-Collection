#include<iostream>
using namespace std;
int main()
{
    int num,i=1,f1=0,f2=1,f3=0;
    cout<<"Enter any number:"<<endl;
    cin>>num;
    cout<<f1<<endl;
    cout<<f2<<endl;
    while(i<=num-2)
    {
        f3=f1+f2;
        cout<<f3<<endl;
        f1=f2;
        f2=f3;
        i++;
    }
    return 0;
}