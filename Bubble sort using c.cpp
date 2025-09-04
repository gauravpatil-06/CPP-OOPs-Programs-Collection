#include<stdio.h>
int main()
{
	int a[10],N,i,j,temp;
	printf("\nEnter Array size:");
	scanf("%d",&N);
	printf("\nEnter Array Element:");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<N;i++)
	{
		for(j=0;j<N-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nSorted Array Element:");
	for(i=0;i<N;i++)
	{
		printf("%d\t1234",a[i]);
	}
	return 0;
}
