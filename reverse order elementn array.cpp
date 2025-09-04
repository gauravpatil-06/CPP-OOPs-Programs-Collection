#include<iostream>
using namespace std;
int main()
{
  int a[5],i;
  cout<<"Enter five array element:";
  for(i=0;i<5;i++)
  {
  	cin>>a[i];
  }
    cout<<"\n Array element in reverse order:";
      for(i=4;i>=0;i--)
  {
    cout<<" "<<a[i];
  }
    return 0;
}
