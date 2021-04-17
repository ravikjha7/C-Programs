#include <stdio.h>
int fact(int n)
{   int res;
    if(n==1)
    {
        return 1;
    }
    else
    {
        res=n*fact(n-1);
    }
    return res;
}
int main(void) {
	int t,m,x,y,n;
	scanf("%d %d",&t,&m);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d",&n);
	    x=fact(n);
	    y=(1/x);
	    printf("%d %d",x%m,y%m);
	}
	return 0;
}
