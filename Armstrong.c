#include<stdio.h>
void main()
{
    /*Armstrong number means a number whose individual digits when cubed and added gives the same number*/
    int n,cube,r,sum=0,temp;
    printf("Enter one number:\n");
    scanf("%d",&n);
    temp=n;
    
    while(n>0)
    {
        r=n%10;
        cube=r*r*r;
        sum=sum+cube;
        n=n/10;
    }
        n=temp;

        if(n==sum)
        printf("%d is an Armstrong number\n",n);
        else
        {
            printf("%d is not an Armstrong number",n);

        }
        
}