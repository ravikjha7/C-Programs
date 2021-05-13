#include<stdio.h>
#include<math.h>
int checkprime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int flag=0;
	for(int i=2;i<=n/2;i++)
	{
		if(checkprime(i))
		{
			if(checkprime(n-i))
			{
				printf("Yes %d + %d = %d",i,n-i,n);
				flag=1;
			}
		}
	}
	if(flag==0)
	printf("No It cannot be represented\n");
	return 0;
}