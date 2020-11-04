#include<stdio.h>
void main()
{
	int p,c,m,cs,e,total,perc;
	printf("Enter marks of Phy Chem Maths CS English:\n");
	scanf("%d %d %d %d %d",&p,&c,&m,&cs,&e);
	total=p+c+m+cs+e;
	perc=total/5;
	if(perc>=60)
		printf("Division A Bhai Party Kab De Raha Hai");
	else if(perc>=50)
		printf("Division B Bhai Party Kab De Raha Hai");
	else if(perc>=40)
		printf("Division C Bhai Party Kab De Raha Hai");
	else
		printf("Bhai Padh le jaake Dream 11 pe team mai Bana Lunga");
}