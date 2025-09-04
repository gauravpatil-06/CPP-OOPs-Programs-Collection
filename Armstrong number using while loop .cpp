#include<iostream>
using namespace std;
int main()
{
    int sum=0,d,num,ori;
    cout<<"Enter any number:";
    cin>>num;
    ori=num;
    while(num!=0)
    {
     d=num%10;
     sum=sum+d*d*d;
     num=num/10;
    }
    if(sum==ori)
    {
     cout<<ori<<"is Armstrong number"<<endl;
    }
    else
    {
     cout<<ori<<"is Not Armstrong number"<<endl;
    }
    return 0;
}