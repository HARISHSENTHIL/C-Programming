#include<stdio.h>
int add(int x,int y)
{
int sum  = 0;
sum = x+y;
return sum;

}
void main()
{
    int r,a,b;

printf("enter the number:");
scanf("%d%d",&a,&b);
r = add(a,b);
printf("result = %d",r);
}
