#include<stdio.h>
#include<math.h>
float distance(int x1,int y1,int x2,int y2)
{
	float dis;
	dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return dis;
}
float area1(float r)
{	float area;
	area=3.14*r*r;
	return  area;
}
void main()
{
	int x1,x2,y1,y2;
	printf("Enter the coordinates of one point: x1 y1\n");
	scanf("%d %d",&x1,&y1);
	printf("Enter the coordinates of second point: x2 y2\n");
	scanf("%d %d",&x2,&y2);
	float r,area;
	r=distance(x1,y1,x2,y2);
	area=area1(r);
	printf("The Area of the circle with radius %f is %f\n",r,area);
}