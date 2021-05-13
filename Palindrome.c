#include<stdio.h>
void main()
{
    int n,r,sum=0,temp;
    printf("Enter one number:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=temp;

    if(n==sum)
    printf("%d is a Palindrome number\n",n);
    else
    printf("%d is not a Palindrome\n",n);
}