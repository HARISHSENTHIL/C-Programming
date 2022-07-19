#include<stdio.h>
void main()
{
    int a,r,sum=0,temp;
    printf("enter the number: ");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        r=a%10;
        sum=(sum*10)+r;
        a=a/10;
    }
    if(temp==sum)
    {
        printf("palindrome number ");
    }
    else
    {
        printf("not palindrome");
    }
}
