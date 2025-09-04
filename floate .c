#include<stdio.h>
#include<conio.h>
int main()
{
    float a[5];
    int i;
    clrscr();
    for(i=0; i<=4; i++)
    {
        printf("\n enter %d element:",i);
        scanf("%f",&a[i]);
    }
    printf("array elements are :\n");
    for(i=0; i<=4 ; i++)
    { 
    printf("\n a[%d]=%f",i,a[i]);
    }
    getchar();
    
}