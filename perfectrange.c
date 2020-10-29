#include<stdio.h>
void main()
{
    int n,i,sum=0,r;
    printf("Enter the range upto which Perfect number is required:\n");
    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {   sum=0;
        for(i=1;i<r;i++)
        {
            if(r%i==0)
            sum=sum+i;

        }
        if(r==sum)
        printf("%d\n",r);
    }
}