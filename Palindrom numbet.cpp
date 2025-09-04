#include<iostream>
using namespace std;
int main()
{
    int res=0,rem,num,n;
    cout<<"Enter any number:";
    cin>>num;
    n=num;
    while(num!=0)
    {
     rem=num%10;
     res=res*10+rem;
     num=num/10;
    }
    if(n==res)
    {
     cout<<n<<" is palindrome number"<<endl;
    }
    else
    {
     cout<<n<<" is Not palindrome number"<<endl;
    }
    return 0;
}
