#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the Three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("%dis greater than %dand%d",a,b,c);
}
return 0;
}
