#include <stdio.h>
int main()
{
    char name[50];
    int roll;
    float marks;
    printf("Enter The Information of Students :\n\n");
    printf("Enter Name: ");
    scanf("%s",&name);
    printf("Enter Roll No.: ");
    scanf("%d",&roll);
    printf("Enter marks: ");
    scanf("%f",&marks);
    printf("\nDisplaying Information\n");
    printf("Name: %s\n",name);
    printf("Roll: %d\n",roll);
    printf("Marks: %.2f\n",marks);
    if(marks>=35)
    {
        printf("passed");
    }
    else
    {
        printf("failed");
    }
    return 0;
}