#include<stdio.h>
#include<conio.h>
void main ()
{
    int a[3][2];
    clrscr();
    printf("Enter Matrix elements:");
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=1; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");

    }
    getch();
}