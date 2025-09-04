#include <stdio.h>
#include<conio.h>
int main()
 {
  int a[5], i, j, temp;
  clrscr();
  printf("Enter any 5 array elements:\n");
  for (i = 0; i <=4; i++) 
{
    scanf("%d", &a[i]);
  }

  for (i = 0; i<=4; i++)
 {
    for (j =0; j <=4-1; j++)
     {
      if (a[j] < a[i]) 
    {
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
      }
    }
  }
  printf("Array elements in descending order:\n");
  for (i = 0; i <=4; i++)
 {
    printf("a[%d]=%d\n ", i,a[i]);
  }
  return 0;
}