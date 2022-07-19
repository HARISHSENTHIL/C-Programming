#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greater than %d and %d",a,b,c);
        }
        else
        {
            printf("%d is not greater than %d and %d",a,b,c);
        }
    }
    else
    {
        printf("%d is not greater than %d and %d",a,b,c);
    }
}
