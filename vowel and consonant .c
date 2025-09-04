#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 printf("Enter any character=");
 scanf("%c",&ch);
 if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'
    ||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
 {
  printf("%c is vowel",ch);
 }
 else
 {
  printf("%c is consonant",ch);
 }
 getch();
} 