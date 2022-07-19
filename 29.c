#include<stdio.h>
int add(int a,int b)
{
printf("the valuse is %d",a+b);
}
void main()
{
int x,y;
printf("enter the number :");
scanf("%d%d",&x,&y);
add(x,y);
}
