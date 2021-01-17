#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x){
    int r,sum=0,temp;
    temp=x;
    while(x>0)
    {
        r=x%10;
        sum=(sum*10)+r;
        x=x/10;
    }
    x=temp;
    if(x==sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void main()
{	int x;
	scanf("%d",&x);
	printf("%d\n",isPalindrome(x));
}