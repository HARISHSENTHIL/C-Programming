#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50],s2[50],s3[50];
    printf("Enter two string : ");
    gets(s1);
    gets(s2);
    printf("\nString 1 : %s",s1);
    printf("\nString 2 : %s",s2);
    printf("\nLength of s1 = %d",strlen(s1));
    printf("\nLength of s2 = %d",strlen(s2));
    strcpy(s3,s1);
    printf("\nString 3:  %s",s3);
    printf("\nReverse string 3 : %s",strrev(s3));
    printf("\nComparing string 1 and 3 : ");
    if(strcmp(s1,s3))
    {
        printf("\nBoth are equal");
    }
    else
    {
        printf("\nBoth are not equal");
    }
}
