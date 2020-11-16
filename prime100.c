#include<stdio.h>
void main()
{
	int i,r,count;
	printf("The Prime numbers between the range 0 to 100 is:\n");
	for(i=2;i<=100;i++)
	{	count=0;
		for(r=2;r<i;r++)
		{
			if(i%r==0)
			{count++;
			break;}
		}
	if(count==0)
	printf("%d\n",i);
	}
}