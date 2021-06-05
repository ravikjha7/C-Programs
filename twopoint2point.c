#include<stdio.h>
#include<math.h>
float funct(float a);
int main()
{
    char choice='y';
    float f1,f2,x,h;
    printf("X =");
    scanf("%f",&x);
    do
    {
        printf("Enter value of h ? ");
        scanf("%f",&h);
        printf("\n");
        printf("The derivative is: \n");
        f1=(funct(x+h)-funct(x))/h;
        f2=(funct(x+h)-funct(x-h))/(2*h);
        printf("\n two point derivative=%f",f1);
        printf("\nthree point derivative=%f",f2);
        printf(" continue (y/n) ");
		scanf("%c",&choice);
        scanf("%c",&choice);
    }while(choice=='y');
    
    return 0;
}
float funct(float x)
{
    return exp(x)*sin(x);
}