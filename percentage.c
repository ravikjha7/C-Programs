#include<stdio.h>
int main()
{
	int p,c,m;
	int no;
	char name[20];
	printf("Enter your Roll No.\n");
	scanf("%d",&no);
	while ((getchar()) != '\n');
	printf("Enter Your Name\n");
	gets(name);
	printf("Enter marks of physics chemistry and maths\n");
	scanf("%d %d %d",&p,&c,&m);
	int total;
	total=p+c+m;
	float percentage;
	percentage = (float)total/3;
	char div;
	if(percentage>=80)
		div = 'A';
	else if(percentage>=60)
		div= 'B';
	else if(percentage>=40)
		div='C';
	else if(percentage>=35)
		div='D';
	else
		div='E';
	printf("%s Your Total Marks is %d \nYour Percentage is %.2f\nYour Grade is %c\n",name,total,percentage,div);
	return 0;
	
}