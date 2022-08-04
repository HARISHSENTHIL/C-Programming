#include <stdio.h>
#include <math.h>
void main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	double result;
	result = sqrt(a);
	printf("Square root of %d : %.2f",a,result);
}

