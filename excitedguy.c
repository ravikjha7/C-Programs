#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d",&testcase);
	int d,k,check=0;
	int r;
	for(int i=1;i<=testcase;i++)
	{ check=0;
	scanf("%d %d",&d,&k);
	r=d/k;
		for(int j=0;j<=r;j++)
	{
		if(d%(j*k)==0||d%(j*k)==k-1)
		{
			printf("YES\n");
			check++;
			break;
		}
		else if(d%(j*(k-1))==0||(d%(j*(k-1))==k))
		{
			printf("YES\n");
			check++;
			break;
		}
		
	}
	if(check==0)
	{
		printf("NO\n");
	}
	}
	return 0;
	
}

