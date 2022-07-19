#include<stdio.h>
int main(){
int a, b , temp =0;
printf("enter the values for a,b:");
scanf("%d%d",&a,&b);

temp = a;
a=b;
b=temp;
printf("\nAFTER SWAPPING:\n");
printf("\nthe values of 1st element : %d AND 2nd eleemnt : %d",a,b);

}
//#printf("\nthe values of 1st element:%d AND 2nd element:%d",a,b);#//
