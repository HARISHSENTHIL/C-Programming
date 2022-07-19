#include<stdio.h>
void main()
{
    int i=1;
    for(i=1;i<=100;i++)
    {
    printf("\t%d",i);
    }
    printf("\n while loop \n");
    i=1;
    while(i<=100)
    {
        printf("\t%d",i);
        i++;
    }
    printf("\n Do while loop \n");
    i=1;
    do{
    printf("\t%d",i);
    i++;
    }
    while(i<=100);
}
