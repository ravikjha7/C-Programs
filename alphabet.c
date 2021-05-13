#include<stdio.h>
void printAlphaBet(int *a)
{	int i=0;
	while(i<26)
	{	
		printf("%c ",*a+(i));
		i++;
	}
}
int main()
{	
	int a=65;
	printAlphaBet(&a);
	return 0;
}