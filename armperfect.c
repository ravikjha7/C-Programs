#include<stdio.h>
void armstrong(int n){
	int r,sum=0,temp=n;
	while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
        if(temp==sum)
		printf("%d is an Armstrong number\n",temp);
        else
        printf("%d is not an Armstrong number\n",temp);
}
void perfect(int n){
	int sum=0;
	for(int i=1;i<n;i++)
    {
       if(n%i==0)
       sum=sum+i;
    }
    if(n==sum)
    printf("%d is a Perfect number\n",n);
    else
    printf("%d is not a Perfect number\n",n);
}
void main()
{
	int n;
	scanf("%d",&n);
	armstrong(n);
	perfect(n);
}