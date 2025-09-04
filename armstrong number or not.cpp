#include<iostream>
using namespace std;
int main()
{
	int num,rem,res=0,N;
	cout<<"\nEnter number:";
	cin>>num;
	N=num;
	while(num!=0)
	{
		rem=num%10;
		res=res+(rem*rem*rem);
		num=num/10;
	}
	if(N==res)
	{
		cout<<"\nArmstrong number";
	}
	else
	{
		cout<<"\nNot Armstrong number";
	}
	
}
