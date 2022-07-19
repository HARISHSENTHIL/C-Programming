#include<stdio.h>
int add()
{
int a,b,sum=0;
printf(" enter theb number:");
scanf("%d%d",&a,&b);
sum=a+b;
return sum;
}
void main()
{
int s;
s=add();
printf("\n%d",s);
}
