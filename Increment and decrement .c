#include<stdio.h>
#include<conio.h>
void main()
{
int a=5,b;
    b=++a;
printf("a=%d\n",a);
printf("b=%d",b);
b=a++;
printf("\na=%d\n",a);
printf("b=%d",b);
getchar();
}