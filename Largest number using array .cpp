#include<iostream>
using namespace std;
int main()
{
    int i,large,a[5];
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
    large=a[0];
    for(i=0; i<=4; i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
    }
    cout<<"Largest number="<<large;
    return 0;
}

