#include<stdio.h>
#include<conio.h>
#include<string.h>
void astrcpy (char[],char[]);
void main ()
{
    char s1[20],s2[20];
    printf("\nEnter the string=");
    gets(s2);
    astrcpy(s1,s2);
    printf("\nSource string=%s",s2);
    printf("\nTarget string=%s",s1);
    getch();
}
void astrcpy(char x[],char y[])
{
    int i;
    i=0;
    while(y[i]!='\0')
    {
        x[i]=y[i];
        i++;
     }
    x[i]='\0';
}