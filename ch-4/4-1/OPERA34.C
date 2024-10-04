#include<stdio.h>
#include<conio.h>

main(){
	int x,y;
	clrscr();

	printf("\nEnter any value of X  :  ");
	scanf("%d",&x);

	printf("\nEnter any value of Y  :  ");
	scanf("%d",&y);


	printf("\n\nThe answer of (x + y)^3 is  :  %d",(x + y) * (x + y)
	 * (x + y));

	getch();

}