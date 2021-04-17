#include<stdio.h>
#include<string.h>

int sort_by_length(char* a,char* b) {
    if(strlen(a)<=strlen(b))
    {
        return 0;
    }
    else if(strlen(b)>strlen(a))
	{
		return 1;
    }
	else
	{
		return 10;
	}
}
void main()
{
	char a[20];
	char b[15];
	scanf("%s",&a);
	scanf("%s",&b);
	int len=sort_by_length(a,b);
	printf("%d",len);
}