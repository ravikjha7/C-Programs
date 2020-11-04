#include<stdio.h>

struct emp
{
    int eno;
    char ename[20];
    int esal;
};
void main() 
{   struct emp e ={ 30 , 'R', 96};
    printf("Employ details:\n");
    printf("Employ no:%d\n",e.eno);
    printf("Employ name:%s\n",e.ename);
    printf("Employ salary:%d\n",e.esal);

}