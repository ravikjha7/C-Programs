#include<stdio.h>
void main()
{
	char s[]="Churchgate no church no gate";
	char t[30];
	char *ss=s,*tt=t;
	while(*ss!='\0')
	{
		*tt=*ss;
		tt++;
		ss++;
	}
	printf("%s",t);
}