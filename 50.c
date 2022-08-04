#include<stdio.h>
void main()
{
    int n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int a[n],i,j,temp;
    printf("Enter %d numbers :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nUnsorted array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for (i=0;i<n;++i)
    {
        for (j=i+1;j<n;++j)
        {
            if (a[i]>a[j])
            {
                temp =  a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

    }
    printf("\nSorted array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
