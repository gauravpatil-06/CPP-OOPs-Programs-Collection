#include<stdio.h>
#include<conio.h>
void main()
{
    char a[6]= {'G','A','U','R','A','V'};
    int i;
    clrscr();
    printf("array elements are\n");
    for(i=0; i<=5; i++)
    {
        printf("\n a[%d]=%c",i,a[i]);
    }
    getch();
}