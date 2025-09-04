#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter any two number:";
    cin>>a>>b;
    cout<<"Before swapping "<<a<<" and "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	 cout<<"After swapping "<<a<<" and "<<b<<endl;
    return 0;
}
