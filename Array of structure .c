#include <stdio.h>
#include<conio.h>
struct employee
{
 int emp_id;
 char name[20];
 float salary;
}e[3];
void main ()
{
for(int i=0;i<=2;i++)
{
printf("enter employee I'd,name, salary:");
scanf("%d%s%f",&e[i].emp_id,&e[i].name,&e[i]. salary);
}
printf("employee details\n");
for(int i=0;i<=2;i++)
{
printf("\n employee id=%d",e[i].emp_id);
printf("\n employee name=%s",e[i].name);
printf("\n employee salary=%f",e[i]. salary);
}
getch();
}