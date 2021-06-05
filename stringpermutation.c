#include<stdio.h>
#include<string.h>
void swap(char *a, char *b){
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void permute(char *a, int l, int r){
	if (r==1)
		printf("%s\n",*a);
	else{
		for (int i = l; i <= r; i++){
			swap(&a[l], &a[i]);
			permute(a, l+1, r);
			swap(&a[l], &a[i]);
		}
	}
}
int main(){
	char *str = "ABC";
	int n = strlen(str);
	permute(str, 0, n-1);
	return 0;
}