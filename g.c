#include<stdio.h>
#include<conio.h>
int main()
{
    char a[5],i;
    clrscr();
    for(i=0; i<=4; i++)
    {
        printf("\n enter %d element:",i);
        scanf("%d",&a[i]);
    }
    printf("array elements are :\n");
    for(i=0; i<=4 ; i++)
    { 
    printf("\n a[%d]=%d",i,a[i]);
    }
    getchar();
    
}