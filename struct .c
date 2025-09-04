#include<stdio.h>
#include<conio.h>
struct employee
{
    int employee_no;
    char name[20];
    float salary;
} e;
void main()
{
    
    struct employee e= {1,"Gaurav patil",100000.00};
    printf("\nemployee structure detail:\n ");
    printf("\nemployee no=%d",e.employee_no);
    printf("\nName=%s",e.name);
    printf("\nsalary=%f",e.salary);
    getch();
}