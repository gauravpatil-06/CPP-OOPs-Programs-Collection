#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"\nEnter number:";
	cin>>num;
	for(i=1;i<=10;i++)
	{
		cout<<"\n"<<num<<"*"<<i<<"="<<(num*i);
	}	
}
