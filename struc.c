#include<stdio.h>

struct emp
{
    int eno;
    char ename[50];
    float esal;
};
void main()
{ 
    struct emp e={99,'R',96.45};
    printf("%d\n",sizeof(e));
    printf("Employ details:\n");
    printf("Employ no:%d\n",e.eno);
    printf("Employ name:%s\n",e.ename);
    printf("Employ salary:%f K/month\n",e.esal);

}