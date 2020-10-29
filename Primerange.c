#include<stdio.h>
void main()
{
    int n,i,r,sum=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   sum = 0;
        for(r=1;r<=i;r++)
        {
            if(i%r==0)
            sum++;

        }
        if(sum==2)
        printf("%d\n",i);


    }
    
}