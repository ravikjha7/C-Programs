#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,i,r,sum=0;
    printf("Enter the Range:\n");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {   sum = 0;
        for(r=2;r<=sqrt(i);r++)
        {
            if(i%r==0){
			sum++;
            break;
			}
        }
		if(sum==0)
		printf("%d ",i);
    }
}