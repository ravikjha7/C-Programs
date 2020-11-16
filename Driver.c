#include<stdio.h>
struct driver
{
	char dname[50];
	int dno;
	char droute[50];
	int dkms;
};
void main()
{
	struct driver d[3];
	{
		for(int i=0;i<3;i++)
		{
			printf("Enter Your details:\n");
			printf("Your Name:\n");
			gets(d[i].dname);
			printf("Your Driving Lisence No:\n");
			scanf("%d",&d[i].dno);
			getchar();
			printf("Route by which you travel:\n");
			gets(d[i].droute);
			printf("How many kms you have travelled:\n");
			scanf("%d",&d[i].dkms);
			getchar();
		}
	}
		for(int i=0;i<3;i++)
		{
			printf("        Driver details:\n");
			printf("   Name of the driver is: %s\n\n",d[i].dname);
			printf("   Driving Lisence No: %d\n\n",d[i].dno);
			printf("   Route by which he travels: %s\n\n",d[i].droute);
			printf("   Kms he has travelled: %d\n\n\n",d[i].dkms);
		}
}
