#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], b[3][3], result[3][3];
    int i,j;
    printf("Enter elements of 1st matrix\n");
    for ( i = 0; i <=2; i++)
        for ( j = 0; j <=2; j++)
        {
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix\n");

        for ( i = 0; i <= 2; i++)
        for ( j = 0; j <= 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    for ( i = 0; i <= 2; i++)
        for ( j = 0; j <= 2; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    printf("\nSum Of Matrix:\n");
    for ( i = 0; i <= 2; ++i)
    {
        for ( j = 0; j <= 2; ++j)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    getch();
}