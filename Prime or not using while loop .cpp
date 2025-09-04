#include<iostream>
using namespace std;
int main()
{
    int num,i=2,flag=0;
    cout<<"Enter any number:";
    cin>>num;
    while(i<num)
    {
     if(num%i==0)
     {
      flag=1;
      break;
     }
     i++;
    }
    if(flag==1) 
    {
     cout<<num<<"is Not prime number";
    }
    else
    {
     cout<<num<<"is prime number";
    }
    return 0;
}
