#include<stdio.h>
#include<string.h>
void reverse(char *str,int len,int i)
{
	if(i==len)
	return;
	reverse(str,len,i+1);
	printf("%c",str[i]);
	return;
}
int main()
{
	char *str;
	gets(str);
	int len=strlen(str);
	reverse(str,len,0);
	return 0;
}