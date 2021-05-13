#include<stdio.h>
int main()
{
	char str[20];
	gets(str);
	int i=0;
	int count=0;
	while(str[i]!='\0')
	{
			i++;
			if(str[i]==' ')
			count++;
	}
	
	printf("No Of Words :%d\n",count+1);
	return 0;
}