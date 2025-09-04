#include<iostream>
using namespace std;
int main()
{
    int i, element,a[5];
    for(i=0; i<=4; i++)
    {
        cout<<"Enter "<<i<<" Element:";
        cin>>a[i];
    }
    cout<<"Enter the element which you want to search:";
    cin>>element;
    for(i=0; i<=4; i++)
    {
        if(a[i]==element)
        {
            cout<<a[i]<<" is at location a["<<i<<"]"<<endl;
            break;
        }


    }
    if(i==5)
    {
        cout<<element<<" is NOT found in Array"<<endl;
    }
    return 0;
}

