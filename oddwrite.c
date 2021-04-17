/*Given an odd length word which should be printed from the middle of the word.
The output should be in the following pattern.
Input: PROGRAM
Output:
G
GR
GRA
GRAM
GRAMP
GRAMPR
GRAMPRO*/
#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
	printf("Enter String with Odd Characters:\n");
	scanf("%s",name);
	int mid=(strlen(name))/2;
	for(int i=mid;i<strlen(name);i++)
	{
		for(int j=0;j<=i-mid;j++)
		{
			printf("%c",name[mid+j]);
		}
		printf("\n");
	}
	for(int i=0;i<mid;i++)
	{	for(int k=0;k<strlen(name)-mid;k++)
		{
			printf("%c",name[k+mid]);
		}
		for(int j=0;j<=i;j++)
		{	
			printf("%c",name[j]);;
		}
		printf("\n");
	}
	
	
}