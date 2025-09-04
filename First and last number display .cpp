#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"Enter any 5 number:";
    for(int i=0; i<=4; i++)
    {
        cin>>a[i];
    }
    cout<<"First number="<<a[0]<<endl;
    cout<<"Last number="<<a[4];
    return 0;
}
