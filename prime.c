#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter one number:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        sum=sum+1;

    }

    if(sum==2)
    printf("%d is a prime number\n",n);
    else
    {
        printf("%d is not a prime number\n",n);

    }
    
}