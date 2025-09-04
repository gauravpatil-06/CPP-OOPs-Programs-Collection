#include<iostream>
using namespace std;
int main ()
{
    int i,j,n,small,temp,a[30];
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter array element:"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                cout<<"Repeating element  :"<<a[i]<<endl;
            }
        }

    }
    return 0;
}
