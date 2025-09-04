#include<iostream>
using namespace std;
int main()
{
	int a[10],N,small,temp,i,j;
	cout<<"\nEnter size of array:";
	cin>>N;
    cout<<"\nEnter array:";
    for(i=0;i<N;i++)
    {
    	cin>>a[i];
	}
	small=a[0];
	for(i=0;i<N;i++)
    {
    	if(small>a[i])
    	{
    		small=a[i];
		}
	}
	cout<<"\nFirst small number:"<<small;
	for(i=1;i<N;i++)
    {
    	for(j=1;j<N-i;j++)
        {
    	    temp=a[j];
    	    a[j]=a[j+1];
    	    a[j+1]=temp;
       	}	
	}
	cout<<"\nSecond small number:"<<a[2];
}
