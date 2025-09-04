#include<iostream>
using namespace std;
int main()
{
    int i,small,a[5];
    for(i=0; i<=4; i++)
    {
        cout<<"Enter "<<i<<" element";
        cin>>a[i];
    }
    cout<<"Given Array"<<endl;
    for(i=0; i<=4; i++)
    {
        cout<<a[i]<<endl;
    }
    small=a[0];
    for(i=0; i<=4; i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
    }
    cout<<"Smallest number="<<small;
    return 0;
}

