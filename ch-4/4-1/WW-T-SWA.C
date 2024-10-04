#include<stdio.h>
#include<conio.h>

main(){
	int a,b;
	clrscr();

	printf("\nEnter any value of a  :  ");
	scanf("%d",&a);

	printf("\nEnter any value of b  :  ");
	scanf("%d",&b);

	printf("\n\n a = %d  b = %d ",a,b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("\n\n a = %d  b = %d ",a,b);

	getch();
