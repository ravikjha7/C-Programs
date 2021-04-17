#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    int a_size=strlen(a);
    int b_size=strlen(b);
    int min=a_size<b_size?a_size:b_size;
    for(int i=0;i<min;i++)
    {
        if(a[i]<b[i])
        {
            return 0;
        }
        else {
        return 1
		;
        }
    }
    if(a_size<b_size)
    {
        return 0;
    }
    else {
    return 1;
    }
    
}

int lexicographic_sort_reverse(const char* a, const char* b) {
int a_size=strlen(a);
    int b_size=strlen(b);
    int min=a_size<b_size?a_size:b_size;
    for(int i=0;i<min;i++)
    {
        if(a[i]>b[i])
        {
            return 0;
        }
        else {
        return 1;
        }
    }
    if(a_size<b_size)
    {
        return 0;
    }
    else {
    return 1;
    }
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int count_a=0;
    int a_size=strlen(a);
    int b_size=strlen(b);
    int count_b=0;
    int check[]={0};
    for(int i=0;i<a_size;i++)
    {
        check[a[i]]=1;
    }
    for(int i=0;i<128;i++)
    {
        if(check[i]!=0)
        {
            count_a++;
        }
    }
    int check2[]={0};
    for(int i=0;i<b_size;i++)
    {
        check2[b[i]]=1;
    }
    for(int i=0;i<128;i++)
    {
        if(check2[i]!=0)
        {
            count_b++;
        }
    }
    if(count_a<=count_b)
    {
        return 1;
    }
    else {
        return 0;
    }
}

int sort_by_length(char* a,char* b) {
    if(strlen(a)<=strlen(b))
    {
        return 0;
    }
    else if(strlen(b)>strlen(a))
	{
		return 1;
    }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    char *temp;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(cmp_func(arr[j],arr[j+1]))
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n"); 

   string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n"); 

   string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n"); 

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n"); 
}