#include<stdio.h>
void main()
{   int n,lar,i;
    int arr[n];
    printf("Enter size of Array:\n");
    scanf("%d",&n);

    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    lar=arr[0];

    for(i=0;i<n;i++)
    {
        if(lar<arr[i])
        lar=arr[i];
    }
    printf("Largest element of Array is : %d\n",lar);



}