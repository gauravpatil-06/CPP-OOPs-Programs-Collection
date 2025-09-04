#include<iostream>
using namespace std;
int main()
{
    int i,fact=1,num;
    cout<<"Enter any number:";
    cin>>num;
    for(i=1; i<=num; i++)
    {
        fact=fact*i;
    }
    cout<<"factorial number="<<fact;
    return 0;
}