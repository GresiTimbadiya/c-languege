#include<stdio.h>
#include<conio.h>

main(){
	float celsius;

	clrscr();

	printf("Enter temperature in celsius : ");
	scanf("%f",&celsius);

	printf("The temperature in fahrenheit : %.2f",(celsius*9/5)+32);


	getch();

}