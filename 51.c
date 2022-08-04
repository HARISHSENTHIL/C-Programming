#include<stdio.h>
long factorial(int a)
{
    if (a==0)
    {
        return 1;
    }
    else
    {
        return(a*factorial(a-1));
    }
}
void main()
{
    int a;
    long fact;
    printf("Enter a number: ");
    scanf("%d", &a);
    fact=factorial(a);
    printf("Factorial of %d : %ld\n",a,fact);
}
