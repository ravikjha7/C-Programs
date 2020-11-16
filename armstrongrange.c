#include<stdio.h>
void main()
{
	int i,r,n;
	for(i=1;i<=500;i++)
	{	int sum=0,cube=0;
		n=i;
		while(i>0)
		{
			r=i%10;
			cube=r*r*r;
			sum=sum+cube;
			i=i/10;
		}
		i=n;
		if(i==sum)
		printf("%d\n",i);
		
	}
}