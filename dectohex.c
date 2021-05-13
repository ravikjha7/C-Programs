#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int r;
	int temp=n;
	int count=0;
	while(n>0)
	{
		n=n/16;
		count++;
	}
	n=temp;
	temp=count;
	char hex[count];
	while(n>0)
	{
		r=n%16;
		if(r==0)
		hex[count-1]=0;
		else if(r==1)
		hex[count-1]='1';
		else if(r==2)
		hex[count-1]='2';
		else if(r==3)
		hex[count-1]='3';
		else if(r==4)
		hex[count-1]='4';
		else if(r==5)
		hex[count-1]='5';
		else if(r==6)
		hex[count-1]='6';
		else if(r==7)
		hex[count-1]='7';
		else if(r==8)
		hex[count-1]='8';
		else if(r==9)
		hex[count-1]='9';
		else if(r==10)
		hex[count-1]='A';
		else if(r==11)
		hex[count-1]='B';
		else if(r==12)
		hex[count-1]='C';
		else if(r==13)
		hex[count-1]='D';
		else if(r==14)
		hex[count-1]='E';
		else if(r==15)
		hex[count-1]='F';
		n=n/16;
		count--;
	}
	for(int i=0;i<temp;i++)
	{
		printf("%c",hex[i]);
	}
	return 0;
}