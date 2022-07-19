#include<stdio.h>
void main()
{
int mark;
printf("enter the mark:");
scanf("%d",&mark);
if(mark<0&&mark>100)
{
printf("enter the valid mark");
}
else if(mark<50)
{
printf("grade:E");
}
else if(mark > 50 && mark < 60)
{
printf("grade:D");
}
else if(mark > 60 && mark < 70)
{
printf("grade:C");
}
else if(mark > 70 && mark < 80)
{
printf("grade:B");
}
else if(mark > 80 && mark < 90)
{
printf("grade:A");
}
else
{
printf("grade:S");
}
return 0;
}
