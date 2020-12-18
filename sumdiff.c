#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,r;
    float m,s;
    scanf("%d %d",&n,&r);
    scanf("%f %f",&m,&s);
    printf("%d %d\n",n+r,n-r);
    printf("%.2f %.2f",m+s,m-s);
    return 0;
}
