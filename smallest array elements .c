#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,small;
    clrscr();
    for(i=0; i<=4; i++)
    {
        printf("\n enter %d element:",i);
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=0; i<=4 ; i++)
    { 
     if(a[i]<small)
    {
    small=a[i];
    }
    }
    printf("Smallest array elements:%d",small);
    getch();
    
}