#include<stdio.h>
void main()
{
    int a[10],i,l;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    l =a[0];
    for(i=1;i<10;i++)
    {
        if(l<a[i])
        {
            l = a[i];
        }
    }
    printf("The largest number is %d",l);
}
