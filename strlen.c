#include<stdio.h>
#include<string.h>
void main()
{
    int len;
    char s[20];
    printf("Enter ur name:\n");
    gets(s);
    len=strlen(s);
    printf("Size of string:%d byte(s)",len);
}