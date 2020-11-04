#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    printf("Enter a string:\n");
    gets(s);
    strrev(s);
    printf("%s",s);

}