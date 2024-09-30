#include<stdio.h>
#include<conio.h>

main(){
	float p,r,n;
	clrscr();

	printf("Enter the principal amount : ");
	scanf("%f",&p);

	printf("Enter the rate : ");
	scanf("%f",&r);

	printf("Enter the month : ");
	scanf("%f",&n);

	printf("\n   = Simple interest : %.2f",p*r*n/100);


	getch();

}