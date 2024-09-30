#include<stdio.h>
#include<conio.h>
#define pi 3.14

main(){
	float r;
	clrscr();

	printf("Enter the radious of circle : ");
	scanf("%f",r);

	printf("\n   = Perimeter of circle : %.2f",2*pi*r);

	getch();
}