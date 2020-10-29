#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter one number:\n");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
       if(n%i==0)
       sum=sum+i;
    }
    if(n==sum)
    printf("%d is a Perfect number",n);
    else
    {printf("%d is not a Perfect number",n);
    }
}