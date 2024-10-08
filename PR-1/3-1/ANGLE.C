#include<stdio.h>
#include<conio.h>

main(){
	float a,b;

	clrscr();

	printf("Enter the first angle : ");
	scanf("%f",&a);

	printf("Enter the second angle : ");
	scanf("%f",&b);

	printf("\n");

	printf("The third angle of the triangle is : %.2f",180 - (a+b));


	getch();

}