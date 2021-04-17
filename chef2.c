#include<stdio.h>
void main()
{
	int testcase;
	scanf("%d",&testcase);
	
	while(testcase--)
	{	
		long long int total_time=0,number_of_seasons,i;
		
		scanf("%lld",&number_of_seasons);
		long long int introtime[number_of_seasons];
		for(int i=0;i<number_of_seasons;i++)
		{
			scanf("%lld",&introtime[i]);
		}
		
		long long int j=0;
			while(number_of_seasons--)
			{	long long int number_of_episodes;
				scanf("%lld",&number_of_episodes);
				long long int time[number_of_episodes];
				for(i=0;i<number_of_episodes;i++)
				{
					scanf("%lld",&time[i]);
				}
			
				for(i=0;i<number_of_episodes;i++)
				{	if(i==0)
					{	
						total_time=total_time+time[i];
					}
					else
					{
						total_time=total_time+time[i]-introtime[j];
					}
			}
			j++;
		}
		printf("%lld\n",total_time);
	}
}