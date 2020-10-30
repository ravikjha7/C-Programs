#include<stdio.h>
int fact(int r);

void main()
{
    int n,sum=0,r,res,temp;
    printf("Enter one number:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        res=fact(r);
        sum=sum+res;
        n=n/10;
    }
    
        n=temp;
        if(n==sum)
        printf("%d is a Strong number\n",n);
        else
        {
            printf("%d is not a Strong number\n",n);
        }
        
}

int fact(int r)
{
    int res;
        if(r==0)
        res=1;
        else
        {
            res=r*fact(r-1);
        }
        return res;
    }