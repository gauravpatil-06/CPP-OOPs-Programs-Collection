#include <stdio.h>
#include <conio.h>
void main()
{
    int a[2][2], t[2][2];
    int i,j;
    printf("Enter elements of 1st matrix\n");
    for ( i = 0; i < 2; i++)
        for ( j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }

    printf(" elements of odd matrix\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
        }
    for ( i = 0; i < 2; i++)
        for ( j = 0; j < 2; j++)
        {
            t[j][i] = a[i][j];
        }
    printf("\ntranspose Of Matrix:\n");
    for ( i = 0; i < 2; ++i)
    {
        for ( j = 0; j < 2; ++j)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
    getch();
}