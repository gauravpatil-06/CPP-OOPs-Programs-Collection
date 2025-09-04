#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 float a,b,c,x1,x2;
 cout<<"Enter value for a,b,c:";
 cin>>a>>b>>c;
 x1=(-b+sqrt(b*b-4*a*c))/(2*a);
 cout<<"x1="<<x1;
 x2=(-b-sqrt(b*b-4*a*c))/(2*a);
 cout<<"x2="<<x2;
 return 0;
}
