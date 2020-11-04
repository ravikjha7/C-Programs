#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*arr,i;
    printf("Size of Array:\n");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    if(arr==NULL)
    printf("OUT OF MEMORY\n");
    else
    {
        printf("The elements of Arrays are:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",*(arr+i));
        }
    }
    
}