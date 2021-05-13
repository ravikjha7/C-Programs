#include<stdio.h>
int max(int *a,int *b){
	int maxm;
	if(*a>*b)
	maxm=*a;
	else
	maxm=*b;
	return maxm;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int maxm=max(&a,&b);
	printf("%d",maxm);
	return 0;
}