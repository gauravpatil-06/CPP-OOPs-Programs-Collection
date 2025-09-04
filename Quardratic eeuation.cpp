#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,x1,x2;
	cout<<"\nEnter any three number:";
	cin>>a>>b>>c;
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	cout<<"\nx1="<<x1;
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	cout<<"\nx2="<<x2; 
}
