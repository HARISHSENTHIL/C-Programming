#include<stdio.h>

char callname(char n[])
{
    char name[30];
    printf("\n\t%s",n);
}
void main()
{
    char n[30];
    printf("Enter your name:");
    scanf("%s",&n);
    callname(n);
}
