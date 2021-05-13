#include<stdio.h>
int stringlen(char *str)
{	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
int main(){
	char *str;
	gets(str);
	int len=stringlen(str);
	printf("The length Of The String is %d",len);
	return 0;
}