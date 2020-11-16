#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	setbkcolor(RED);
	setcolor(BLUE);
	setextstyle(1,HORIZ_DIR,5);
	outtextxy(100,100,"Welcome to CUBA");
	getch();
	closegraph();
}