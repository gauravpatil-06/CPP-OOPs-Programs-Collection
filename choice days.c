#include<stdio.h>
#include<conio.h>
void main()
{
int option;
clrscr();
    printf("Enter any number");
    scanf("%d",&option);
    switch (option)
    {
    case 1:  
    printf("Monday");
    break;
    case 2:
    printf("tuesday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("sunday");
    break;
    default:
    printf("Invalid day");
}
getch();
}