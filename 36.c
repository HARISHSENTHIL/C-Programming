#include<stdio.h>
#include<string.h>
void main()
{
int i,n;
char str[20];
printf("enter the string:");
scanf("%s",&str);
n=strlen(str);
printf("reversed string:");
for(i=n-1;i>=0;i--){
printf("%c",str[i]);
}
}
