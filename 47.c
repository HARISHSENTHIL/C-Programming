#include<stdio.h>
void main()
{
int n1,n2,hfc,lcm,i;
printf("enter the two number:");
scanf("%d%d",&n1,&n2);
for(i=1;i<=n1;i++)
{
if(n1%i == 0 && n2%i==0)
{
 hfc=i;
 }
 lcm=(n1*n2)/hfc;
 printf("hfc : %d and lcm : %d",hfc,lcm);

}
