#include <stdio.h>
void main()
{
int a[100], i, b;
printf("Enter the size of an array \n");
scanf("%d", &b);
for (i = 0; i < b; i++)
{
    printf("the array is :");
  scanf("%d", &a[i]);
}
printf("Even numbers in the array are - ");
for (i = 0; i < b; i++)
{
 if (a[i] % 2 == 0)
{
 printf("%d \t", a[i]);
}
}
printf("\n Odd numbers in the array are -");
for (i = 0; i < b; i++)
{
if (a[i] % 2 != 0)
{
printf("%d \t", a[i]);
}
}
}
