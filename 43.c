#include<stdio.h>
int main(){
int sum=0,i,n,a;
printf("enter the number ");
scanf("%d",&n);
while(n>0)
{
a=n%10;
sum = sum+a;
n=n/10;
}
printf("the sum of %d",sum);
}
