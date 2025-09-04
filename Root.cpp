#include<iostream>
using namespace std;
int main()
{
 int a=50,b=100,c;
 c=(a*b)%(a+b)/(a-b)+(a*b+a*a)/(b-a*b*b*b)+(a*b)-(a/b)%(a-b)*(a%b);
 cout<<"calculation="<<c;
 return 0;
}
