#include<stdio.h>
void main()
{

int a,b,i;
printf("enter the range(a,b) : ");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i % 2 == 0)
{
printf("The even number are %d",i);
}
}
}
