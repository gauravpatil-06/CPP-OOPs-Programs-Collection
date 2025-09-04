#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter any two numbers:";
    cin>>num1>>num2;
    cout<<"Before swapping="<<num1<<"and"<<num2<<endl;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"After swapping="<<num1<<"and"<<num2<<endl;
     return 0;
}