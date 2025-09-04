#include<iostream>
using namespace std;
int main()
{
    int i=1,fact=1,num;
    cout<<"Enter any number:";
    cin>>num;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    cout<<"factorial number="<<fact;
    return 0;
}