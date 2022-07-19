#include<stdio.h>
int main(){
int n,i,temp,sum=0,r;
printf("enter the number:");
scanf("%d",&n);
temp=n;
while(n>0){
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
{
printf("it is an amstrong number");
}
else
{
printf("it is not an amstrong number");
}
}
