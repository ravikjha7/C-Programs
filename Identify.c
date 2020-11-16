#include<stdio.h>
void main()
{
	char c;
	printf("Enter one character:\n");
	scanf("%c",&c);
	if((c>64)&&(c<91))
	printf("%c is a Capital letter\n",c);
	else if((c>96)&&(c<123))
	printf("%c is a Small letter\n",c);
	else if((c>47)&&(c<58))
	printf("%c is a Numeric keyword\n",c);
	else
	printf("%c is a special symbol\n",c);
}