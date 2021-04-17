#include<stdio.h>
int main()
{
	int choice;
	printf("Enter Your Choice\n");
	printf("1.Area of Circle\n2.Perimeter Of Circle\n3.Area Of Rectangle\n4.Area Of Triangle\n5.Perimeter Of Triangle\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter Radius Of Circle\n");
			float r;
			scanf("%f",&r);
			printf("Area of the circle of Radius %f is %0.2f\n",r,3.14*r*r);
			break;
		case 2:
			printf("Enter Radius Of Circle\n");
			float r1;
			scanf("%f",&r1);
			printf("Perimeter Of Circle of Radius %f is %0.2f\n",r1,6.28*r1);
			break;
		case 3:
			printf("Enter length and breadth of Rectangle\n");
			float l,b;
			scanf("%f %f",&l,&b);
			printf("Area Of Rectangle is %0.2f",l*b);
			break;
		case 4:
			printf("Enter Base and Height of Triangle\n");
			float b1,h;
			scanf("%f %f",&b1,&h);
			printf("Area Of Triangle is %0.2f",0.5*b1*h);
			break;
		case 5:
			printf("Enter Three Sides Of Triangle\n");
			float s1,s2,s3;
			scanf("%f %f %f",&s1,&s2,&s3);
			printf("The Perimeter Of Triangle is %f",s1+s2+s3);
			break;
		default:
			printf("Invalid Options!!!\n");
	}
	return 0;
}