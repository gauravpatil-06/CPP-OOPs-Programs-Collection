#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter any three numbers";
    cin>>a>>b>>c;
    if(a<b)
    {
	     if(a<c)
	    {
          cout<<"Smallest Number:"<<a;
     	}
     	else
     	{
          cout<<"Smallest Number:"<<c;
     	}
	}
	else 
	{
	  if(b<c)
	    {
          cout<<"Smallest Number:"<<b;
     	}
     	else
     	{
          cout<<"Smallest Number:"<<c;
     	}
    }
    return 0;
}
