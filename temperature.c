/* Write a C program to read temperature in centigrade and display a
suitable message according to temperature state below : Temp < 0
then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>
int main()
{
	int temp;
	scanf("%d",&temp);
	if(temp>=40)
	printf("It is Very Hot\n");  
	else if(temp>=30)
	printf("Its Hot\n");
	else if(temp>=20)
	printf("Normal in Temp\n");
	else if(temp>=10)
	printf("Cold Weather\n");
	else if(temp>=0)
	printf("Very Cold Weather");
	return 0;
}