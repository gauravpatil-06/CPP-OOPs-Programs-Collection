#include<stdio.h>
#include<conio.h>
void main()
{
    int *p1,*p2,a,b;
    clrscr();
    printf("Enter value of a and b:");
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;
    printf("\nAddition=%d",(*p1+*p2));
    printf("\nsubtraction=%d",(*p1+*p2));
    printf("\nMultiplication=%d",(*p1**p2));
    
getch();
}