#include <stdio.h>
void main(void)
{
    int n;
    printf("Enter no of days:\n");
    scanf("%d",&n);
    
    printf("No of weeks:%d\n",n/7);
    printf("No of months:%d\n",n/30);
    printf("No of years:%d\n",n/365);
    
}