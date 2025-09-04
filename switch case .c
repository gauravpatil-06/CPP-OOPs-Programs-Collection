#include<stdio.h>
#include<conio.h>
void main()
{
 int option;
 clrscr();
 printf("Enter any option value:");
 scanf("%dd",&option);
 switch(option)
 {
  case 1:
        printf("yellow");
        break;
 case 2:
        printf("Red");
        break;
 case 3:
        printf("Black");
        break;
 case 4:
       printf("Invalid Entry");
       break;
 }    
 getch();
} 