#include <stdio.h>

int main(void) {
	int tc;
	long long int s,l,m,total;
	long long int **t;
	//number of testcases
	scanf("%d",&tc);
	
	while(tc>0)
	{   // s is for number of seasons
		scanf("%lld",&s);
		long long int i[s],r[s]; 
		// i array will store intro time
	    for(l=0;l<s;l++)
	    {
	        scanf("%lld",&i[l]);
	    }
		// r array will store no of episodes
		// t[][] will store time of each episode
	    for(l=0;l<s;l++)
	    {
	        scanf("%lld",&r[l]);
			for(m=0;m<r[l];m++)
	        {
	            scanf("%lld",&t[l][m]);
	        }
	    }
		long long int totals[s];
		    for(m=0;m<s;m++)
	    {   total=0;
	        for(l=0;l<r[m];l++)
	        {	//total time of episodes of season
	            total=total+t[m][l];
			}
			//total time required to watch of a season
			totals[m]=total-((r[m]-1)*i[m]);
	        
	    }
		total=0;
		//total watch time of all seasons
		for(l=0;l<s;l++)
		{
			total=total+totals[l];
		}
		printf("%lld\n",total);
		tc--;
	}
	return 0;
}

