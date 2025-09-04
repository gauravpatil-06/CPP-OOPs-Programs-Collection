#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i;
    clrscr();
    for(i=0; i<=9; i++)
    {
        printf("\n enter %d element:",i);
        scanf("%d",&a[i]);
    }
    printf("array elements are :\n");
    for(i=0; i<=9 ; i++)
    { 
    printf("\n a[%d]=%d",i,a[i]);
    }
    getchar();
    
}