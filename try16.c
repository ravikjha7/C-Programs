#include<stdio.h>
void main()
{
	FILE *fp = fopen("MSDhoni.txt","r");
	char str[100][100];
	int i=0;
	while(fgets(str[i],100,fp))
	{
		i++;
	}
	int len=i;
	for(int i=0;i<len;i++)
	{
		printf("%s",str[i]);
	}
}