#include <stdio.h>
void main()
{
int a;
printf("enter the year:");
scanf("%d",&a);
if(a % 400 == 0)
{
printf("%d is a leap year :",a);
}
else if(a % 100 == 0){
printf("is an not a leap year");}
else if(a % 4 == 0){
printf("%d is a leap year :",a);}
else
{
printf("it is an not an leap year");
}
return 0;
}
