#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], t[3][3];
    int i,j;
    printf("Enter elements of 1st matrix\n");
    for ( i = 0; i < 3; i++)
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }

    printf(" elements of odd matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
        }
    for ( i = 0; i < 3; i++)
        for ( j = 0; j < 3; j++)
        {
            t[j][i] = a[i][j];
        }
    printf("\ntranspose Of Matrix:\n");
    for ( i = 0; i < 3; ++i)
    {
        for ( j = 0; j < 3; ++j)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
    getch();
}