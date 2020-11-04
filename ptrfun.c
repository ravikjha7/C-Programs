int add(int , int);
int multiply(int,int);
#include<stdio.h>
void main()
{
    int r1,r2;
    int (*ptr)(int x,int y);
    ptr=&add;
    r1=ptr(20,30);
    ptr=&multiply;
    r2=ptr(20,30);
    printf("%d\n",r1);
    printf("%d",r2);

}
int add(int x,int y)
{
    int z=x+y;
    return z;
}
int multiply(int x,int y)
{
    int z=x*y;
    return z;
}



