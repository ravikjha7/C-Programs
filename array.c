#include<stdio.h>
void main()
{   int n,i,sum=0;
    int arr[n];
    printf("Enter size of Array:\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}