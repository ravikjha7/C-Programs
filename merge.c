#include<stdio.h>
#include<string.h>
void main()
{
    int loc,i;
    char a[20]="Hello";
    char b[10]="World";
    loc=strlen(a);
    for(i=0;i<6;i++)
    {
        a[loc+i]=b[i];
    }
    printf("%s\n",a);
}