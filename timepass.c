#include<stdio.h>
int main()
{
	FILE *fp;
	char name[20];
	scanf("%s",name);
	fp = fopen(name,"w");
	return 0;
}