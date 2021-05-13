#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	scanf("%s",str);
	char temp;
	int n=strlen(str);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(str[j]>str[j+1])
			{
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
	printf("%s",str);
	return 0;
}