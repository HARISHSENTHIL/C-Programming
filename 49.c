#include <stdio.h>
void main()
{
   long int a,temp;
   int c=0;
   printf("Enter a number: ");
   scanf("%ld",&a);
   temp =a;
   while(a!=0)
   {
       a=a/10;
       c++;
   }
   printf("\nNumber of digits in %ld: %d",temp,c);
    }

