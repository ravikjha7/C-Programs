#include<stdio.h>
void main()
{
    int n,i,len,size;
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int b[3]={1,2,3};
    len=sizeof(a);
    size=sizeof(b);
    printf("%d\n",len);
    printf("%d\n",size);
}