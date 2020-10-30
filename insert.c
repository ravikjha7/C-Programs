#include<stdio.h>
void main()
{
    int n,i,x,loc;
    int arr[n];
    printf("Enter size of Array:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);  
    }
    printf("Enter element to insert:\n");
    scanf("%d",&x);
    printf("Enter location to insert:\n");
    scanf("%d",&loc);

    for(i=n-1;i<=loc;i--)
    {
        arr[i+1]=arr[i];
    }

    arr[loc]=x;
    printf("The Array after replacement is:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }



}