#include<stdio.h>
int main()
{
int i;
char a[] ="harish";
for(i=0;a[i]!='\a';++i);
printf("the length of the string is :%d",a[i]);
return 0;
}
