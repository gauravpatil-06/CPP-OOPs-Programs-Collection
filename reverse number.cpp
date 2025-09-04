#include<iostream>
using namespace std;
int main()
{
	int num,rem,res=0;
	cout<<"\nEnter number:";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		res=res*10+rem;
		num=num/10;
	}
	cout<<"\nReverse number:"<<res;
}
