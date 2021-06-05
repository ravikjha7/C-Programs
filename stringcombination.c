#include<stdio.h>
#include<string.h>
void permutation(char *str,char *ans){
	if(strlen(str)==0)
	{
		printf("%s\n",ans);
		return;
	}
	char ch = str[0];
	for(int i=0;i<strlen(str);i++){
		ch = str[i];
		char *ros;
		for(int j=0;i<i;j++)
		{
			ros[j]=str[i];
		}
		for(int j=i+1;j<strlen(str);j++)
		{
			ros[j-1]=str[i];
		}
		ans[strlen(ans)]=ch;
		permutation(ros,ans);
	}
	return;
}
int main(){
	char *str;
	scanf("%s",str);
	permutation(str,"");
	return 0;
}