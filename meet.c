#include <stdio.h>
void main() 
{
	int t;
	printf("Enter number of test cases:\n");
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{   char p[10];
		printf("Enter time for meeting\n");
	    scanf("%[^\n]%*c",p); 
		printf("%s",p);
	    int n;
		printf("Enter number of friends\n");
	    scanf("%d",&n);
	    for(int j=1;j<=n;j++)
	    {
	        char r[20];
			printf("Enter time interval\n");
	        scanf("%[^\n]%*c",r); 
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
	}
}


