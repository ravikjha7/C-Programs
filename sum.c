#include<stdio.h>
void main()
{
    int n;
    printf("Enter one number:\n");
    scanf("%d",&n);
    int sum=0,r;
    while(n>0)
    {
        n%10=r;
        sum=sum +r;

    }
    printf("The Sum of Digits of the given number is %d\n",sum);
    
}