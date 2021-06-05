#include <stdio.h>
#include <string.h>
void swap(char *x, char *y){
	char temp=*x;
	*x = *y;
	*y = temp;
}
void stringpermutation(char *a, int l, int n){
if (l == n)
	printf("%s\n", a);
else{
	for (int i = l; i < n+1 ; i++){
		swap((a+l), (a+i));
		stringpermutation(a, l+1, n);
		swap((a+l), (a+i));
	}
}
}
void main(){
	char str[] = "ABC";
	int n = strlen(str);
	stringpermutation(str, 0, n-1);
}