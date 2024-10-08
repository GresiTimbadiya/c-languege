#include<stdio.h>
#include<conio.h>

main(){
	float salary,h,d,t,hra,da,ta;

	clrscr();

	printf("Enter your the base salary : ");
	scanf("%f",&salary);

	printf("Enter the percentage of hra : ");
	scanf("%f",&h);

	printf("Enter the percentage of da : ");
	scanf("%f",&d);

	printf("Enter the percentage of ta : ");
	scanf("%f",&t);

	hra = ( h / 100 ) * salary;
	da = ( d / 100 ) * salary;
	ta = ( t / 100 ) * salary;
	printf("\n");

	printf("This is a gross salary : %.2f",salary+hra+da+ta);


	getch();

}