#include<stdio.h>
struct emp 
{
	int no;
	struct emp *p;
};
void main()
{
	struct emp e1,e2;
	e1.no=100;
	e2.no=200;
	e1.p=&e2;
	e2.p=&e1;
	printf("%d %d",e1.p->no,e2.p->no);
}