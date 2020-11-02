#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    printf("Enter ur name:\n");
    gets(s);
    strlwr(s);
    printf("%s",s);
}
