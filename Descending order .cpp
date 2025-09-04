#include<iostream>
using namespace std;
int main()
{
    int i,j,temp,a[5];
    for(i=0; i<=4; i++)
    {
        cout<<"Enter "<<i<<" Element";
        cin>>a[i];
    }
    for(i=0; i<=4; i++)
    {
        for(j=i+1; j<=4; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"sorted elements in Ascending order are"<<endl;
    for(i=0; i<=4; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}