#include<stdio.h>
int main()
{
int a,b,i,sum=0;
printf("enter the range(a,b) : ");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
sum+=i;
}
printf("Sum = %d",sum);
}
