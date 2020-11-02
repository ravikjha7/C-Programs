#include<stdio.h>
void main()
// {
//     int n,i,j,k;
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int b[3]={1,2,3};

//     printf("Enter location to insert:\n");
//     scanf("%d",&n);

//     for(i=9;i>=n;i--)
//     {
//         a[i+3]=a[i];
//     }
//     for(j=0;j<3;j++)
//     {
//         a[n+j]=b[j];
//     }

//     printf("The new Array is:\n");
//     for(k=0;k<13;k++)
//     {
//         printf("%d\t",a[k]);
//     }


{int a[10] = {1,2,3,4,5,6,7,11,12,13};
     int b[3] = {8,9,10};
     int n ;
     
     printf("Enter location to insert : ");
     scanf("%d",&n);
     
     for( int i = 9 ;  i >= n ; i--)
     {
         a[i+3] = a[i];
     }
     for(int j = 0 ; j < 3; j++) {
         a[n+j] = b[j];
     }
     printf("New Array:\n ");
    for(int k = 0 ; k < 13 ; k++) {
        printf("%d\n",a[k]);
    }

}