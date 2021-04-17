#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,sum=0;
    printf("Enter one number:\n");
    scanf("%d",&n);

    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
		{
			sum++;
			break;
		}

    }

    if(sum==0)
		printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime number\n",n);
    
}