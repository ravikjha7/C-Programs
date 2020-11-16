#include<stdio.h>
#include<math.h>
void main()
{
	int x1,x2,y1,y2;
	printf("Enter the value of x1 x2 y1 y2:\n");
	scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
	printf("The distance between the two points is:%f",sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
}