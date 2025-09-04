#include<iostream>
using namespace std;
int main()
{
  int N,i,sum=0;
  cout<<"Enter array number:";
  cin>>N;
  for(i=1;i<=N;i++)
  {
  	sum=sum+i;
  }
  cout<<"sum of numbers="<<sum;
    return 0;
}
