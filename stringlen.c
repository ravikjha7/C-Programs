#include<stdio.h>
int strlength(char[]);
void main()
{
    int len;
    char s[20];
    printf("Enter a string:\n");
    scanf("%s",s);
    len=strlength(s);
    printf("string length:%d\n",len);
}
int strlength(char s[])
{
    int count=0,i=0;
    while(s[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}