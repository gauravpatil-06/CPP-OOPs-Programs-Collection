#include<iostream>
using namespace std;
int main()
{
    int a[30],n,i,small,temp,j;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter array element:"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    small=a[0];
    for(i=0; i<n; i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
    }
    cout << "smallest Element:" <<small<< endl;
    for(i=1; i<n; i++)
    {
        for(j=1; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout << "second smallest:" <<a[2];
    return 0;
}
