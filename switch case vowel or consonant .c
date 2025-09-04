#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 printf("Enter any character=");
 scanf("%c",&ch);
 switch(ch)
 {
 case'A':
 case'E':
 case'I':
 case'O':
 case'U':
 case'a':
 case'e':
 case'i':
 case'o':
 case'u':
 printf("%c is vowel",ch);
 break;
 default:
 printf("\n%c is consonant",ch);
}
 getch();
} 