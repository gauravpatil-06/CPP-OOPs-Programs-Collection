#include<stdio.h>
#include<conio.h>
void main ()
{
    int i;
    for( i=1; i<=5; i++)
    {
        if(i==3)
        {
            printf("Before continue\n");
            continue;
        }
        else
        {
            printf("Not continue\n");
        }
    }

    getch();
}