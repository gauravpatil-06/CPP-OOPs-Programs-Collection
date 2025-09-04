#include<stdio.h>
#include<conio.h>
void main ()
{
    int a[2][3]={{1,2},{3,4}};
    clrscr();
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=1; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");

    }
    getch();
}