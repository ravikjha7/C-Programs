#include <stdio.h>
void main() 
{   char r[10];
    char p[10];
	int t;
	char temp;
	printf("Enter number of test cases:\n");
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{   printf("Enter time for meeting\n");
		scanf("%c",&temp);
	    scanf("%[^\n]",p);
	    int n;
		printf("Enter number of friends\n");
	    scanf("%d",&n);
	    for(int j=1;j<=n;j++)
	    {
	        printf("Enter time interval\n");
			scanf("%c",&temp);
	        scanf("%[^\n]",r); 
	        if(p[6]=='A')
			{
				if(r[6]=='P')
				{
					printf("0");
				}
				else
				{
					if(r[0]>p[0])
					{
						if(r[1]==2)
						{
							if(r[16]=='P')
							{
								printf("1");
							}
							else
							{
								if(r[9]>p[0])
								{
									printf("1");
								}
								else if(r[9]<p[0])
								{
									printf("0");
								}
								else
								{
									if(r[10]>p[1])
									{
										printf("1");
									}
									else if(r[10]<p[1])
									{
										printf("0");
									}
									else
									{
										if(r[12]>p[3])
										{
											printf("1");
										}
										else if(r[12]<p[3])
										{
											printf("0");
										}
										else
										{
											if(r[13]>=p[4])
										{
											printf("1");
										}
										else if(r[13]<p[4])
										{
											printf("0");
										}
										}
									}
									
								}
							}
								
						}
						else
						{
							printf("0");
						}
					}
					else if(r[0]<p[0])
					{	if(r[10]>p[1])
						{
							printf("1");
						}
						else if(r[10]<p[1])
						{
							printf("0");
						}
						else
						{
						if(r[12]>p[3])
						{
							printf("1");
						}
						else if(r[12]<p[3])
						{
							printf("0");
						}
						else
						{
							if(r[13]>=p[4])
							{
							printf("1");
							}
							else if(r[13]<p[4])
							{
								printf("0");
							}
						}
						}
					}
					else
					{
						if(r[1]>p[1])
						{
							printf("0");
						}
						else if(r[1]<p[1])
						{
							if(r[10]>p[1])
							{
								printf("1");
							}
							else if(r[10]<p[1])
							{
								printf("0");
							}
							else
							{
							if(r[12]>p[3])
						{
							printf("1");
						}
						else if(r[12]<p[3])
						{
							printf("0");
						}
						else
						{
							if(r[13]>=p[4])
							{
							printf("1");
							}
							else if(r[13]<p[4])
							{
								printf("0");
							}
						}
							}
						}
						else
						{
							if(r[3]>p[3])
							{
								printf("0");
							}
							else if(r[3]<p[3])
							{
								if(r[10]>p[1])
							{
								printf("1");
							}
							else if(r[10]<p[1])
							{
								printf("0");
							}
							else
							{
							if(r[12]>p[3])
						{
							printf("1");
						}
						else if(r[12]<p[3])
						{
							printf("0");
						}
						else
						{
							if(r[13]>=p[4])
							{
							printf("1");
							}
							else if(r[13]<p[4])
							{
								printf("0");
							}
						}
							}
							}
							else
							{
								if(r[4]>p[4])
								{
									printf("0");
								}
								else if(r[4]<=p[4])
								{
									if(r[10]>p[1])
							{
								printf("1");
							}
							else if(r[10]<p[1])
							{
								printf("0");
							}
							else
							{
							if(r[12]>p[3])
						{
							printf("1");
						}
						else if(r[12]<p[3])
						{
							printf("0");
						}
						else
						{
							if(r[13]>=p[4])
							{
							printf("1");
							}
							else if(r[13]<p[4])
							{
								printf("0");
							}
						}
							}
								}
							}
						}
					}
				}
			}
			else 
			{
				if(r[15]=='A')
				{
					printf("0");
				}
				else
				{	if(r[6]=='A')
					{	
						if(r[9]>p[9])
						{
							printf("1");
						}
						else if(r[9]<p[9])
						{
							printf("0");
						}
						else
						{
							if(r[10]>p[10])
						{
							printf("1");
						}
						else if(r[10]<p[10])
						{
							printf("0");
						}
						else
						{
							if(r[12]>p[12])
						{
							printf("1");
						}
						else if(r[12]<p[12])
						{
							printf("0");
						}
						else
						{
							if(r[13]>=p[13])
						{
							printf("1");
						}
						else if(r[13]<p[13])
						{
							printf("0");
						}
						}
							
						}
						}
					}
					else
					{
						if(r[0]>p[0])
					{
						printf("0");
					}
					else if(r[0]<p[0])
					{
						
						if(r[9]>p[9])
						{
							printf("1");
						}
						else if(r[9]<p[9])
						{
							printf("0");
						}
						else
						{
							if(r[10]>p[10])
						{
							printf("1");
						}
						else if(r[10]<p[10])
						{
							printf("0");
						}
						else
						{
							if(r[12]>p[12])
						{
							printf("1");
						}
						else if(r[12]<p[12])
						{
							printf("0");
						}
						else
						{
							if(r[13]>=p[13])
						{
							printf("1");
						}
						else if(r[13]<p[13])
						{
							printf("0");
						}
						}
							
						}
						}
						
					}
					}
					
					}
				}
		
			
	    }
	    printf("\n");
	}
}


