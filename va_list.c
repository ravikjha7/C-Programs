#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...)
{
    va_list list;
    va_start(list,count);
    int sum=0;
        for(int i=0;i<count;i++)
        {   int n=va_arg(list,int);
            sum=sum+n;
        }
        va_end(list);
        return sum;
}
void main()
{
	int n=sum(5,3,4,5,6,3);
	printf("%d",n);
}