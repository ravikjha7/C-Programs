#include<stdio.h>
int reverse(int x){
    int r;
    long signed int sum=0;
    while(x>0)
    {
        r=x%10;
        sum=(sum*10)+r;
        x=x/10;
}
    return sum;
}
void main()
{
	int x;
	scanf("%d",&x);
	printf("%d",reverse(x));
}