#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any two number:";
    cin>>a>>b;
    cout<<"Before swapping "<<a<<" and "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	 cout<<"After swapping "<<a<<" and "<<b<<endl;
    return 0;
}
