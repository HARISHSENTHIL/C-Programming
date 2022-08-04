#include <stdio.h>
#include <math.h>
int BtoD(long long n)
int dec=0,i=0,r;
   while (n!=0)
      {
        r =n%10;
        n /=10;
        dec +=r*pow(2, i);
        ++i;
    }
     return dec;
}
void main()
{
    long long a;
    printf("Enter a binary number: ");
    scanf("%lld", &a);
    printf("Decimal of %lld binary : %d",a,BtoD(a));
}
