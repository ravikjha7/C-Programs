#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	gets(str);
	int i=0;
	while(str[i]!='\0'){	
	i++;
	}
	int len = strlen(str);
	printf("Length Without In-built Function : %d\n",i);
	printf("Length With In-built Function : %d\n",len);
	return 0;
}