#include<stdio.h>
#include<stdlib.h>
struct student
{
	int sno;
	char* sname;
	int smarks;
};
void main(int argc,char* argv[])
{
	struct student s;
	s.sno=atoi (argv[1]);
	s.sname=argv[2];
	s.smarks=atoi (argv[3]);
	printf("Student Details\n");
	printf("Roll.No:%d\n",s.sno);
	printf("Name:%s\n",s.sname);
	printf("Marks Out Of 500:%d\n",s.smarks);
}