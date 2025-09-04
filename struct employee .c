#include <stdio.h>
#include <conio.h>
struct student
{
 int emp_id;
 char name[20];
 int age;
 int salary;
}e;
void main()
{
     clrscr();
    printf("Enter employee id,name,age& salary:\n");  
    scanf("%d%s%d%d",&e.emp_id,&e.name,&e.age,&e.salary);
    printf("Employee Details:");
    printf("employee id=%d\n",e.emp_id);
    printf("employee name=%s\n",e.name);
    printf("employee age=%d\n",e.age);
    printf("employee salary=%d",e.salary);
     getch();
}