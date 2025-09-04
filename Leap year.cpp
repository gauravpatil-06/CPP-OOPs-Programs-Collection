#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"\nEnter year:";
	cin>>year;
	if(year%4==0&&year%100!=0||year%400==0)
	{
		cout<<"\nLeap year";
	}
	else
	{
		cout<<"\nNot Leap year";
	}
}
