#include<stdio.h>
int main()
{
int age;
printf("Enter the age:");
scanf("%d",&age);
if(age>=18)
{
printf("The person is eligible for vote:%d",age);
}
else
{
    printf("The person is not eligible for vote:%d",age);
}
}
