#include<stdio.h>
#include<conio.h>
void main ()
{
    int a[2][3];
    clrscr();
    printf("Enter Matrix elements");
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=2; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");

    }
    getch();
}