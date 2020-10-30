#include<stdio.h>
int fact(int n);

void main()
{
    int n,r,sum=0,i,temp,res;
    printf("Enter limit:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {   sum=0;
        temp=i;
        while(i>0)
        {
            r=i%10;
            res=fact(r);
            sum=sum+res;
            i=i/10;

        }
        i=temp;
        if(i==sum)
        printf("%d\n",i);
    }

}

int fact(int n)
{
    int res;
    
    if(n==0)
    res=1;
    else
    res=n*fact(n-1);
    return res;
}