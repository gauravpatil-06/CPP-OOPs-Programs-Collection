#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter any three numbers";
    cin>>a>>b>>c;
    if(a>b)
    {
	     if(a>c)
	    {
          cout<<"Gretest Number:"<<a;
     	}
     	else
     	{
          cout<<"Gretest Number:"<<c;
     	}
	}
	else 
	{
	  if(b>c)
	    {
          cout<<"Gretest Number:"<<b;
     	}
     	else
     	{
          cout<<"Gretest Number:"<<c;
     	}
    }
    return 0;
}
