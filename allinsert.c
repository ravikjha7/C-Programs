#include<stdio.h>
void main()
{
    int n,i;
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int b[3]={1,2,3};

    printf("Enter location to insert:\n");
    scanf("%d",&n);

    for(i=9;i>=n;i--);
    {
        a[i+3]=a[i];
    }
    for(i=0;i<3;i++)
    {
        a[n+i]=b[i];
    }

    printf("The new Array is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }

}