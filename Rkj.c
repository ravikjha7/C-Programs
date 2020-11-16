#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	char* eid;
	printf("     WELCOME TO RKJ LIMITED\nPress Enter to continue");
	getchar();
	eid=(char*)calloc(1,sizeof(char));
	
	for(int i=1;i<=3;i++)
	{
		printf("Employee no %d:\n",i);
		printf("Enter length of Employee id:\n");
		scanf("%d",&n);
		eid=(void*)realloc(eid,n*sizeof(char));
		
		printf("Enter Employee id:\n");
		scanf("%s",eid);
		printf("Employee id is %s\n",eid);
		
	}
	free(eid);
	
}