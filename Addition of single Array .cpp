#include<iostream>
using namespace std;
int main()
{
    int i,j,a[5],b[5];
    cout<<"Enter 5 elements.of first Array:"<<endl;
    for(i=0; i<=4; i++)
    {
        cout<<"Enter "<<i<<" element ";
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Enter 5 elements.of second Array:"<<endl;
    for(i=0; i<=4; i++)
    {
        cout<<"Enter "<<i<<" element ";
        cin>>b[i];
    }

    for(i=0; i<=4; i++)
    {
        j=a[i]+b[i];
        cout<<"a["<<i<<"]+b["<<i<<"]="<<j<<endl;
    }
    return 0;
}

