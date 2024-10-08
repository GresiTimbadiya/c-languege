#include<stdio.h>
#include<conio.h>

main(){
	int no1,no2;
	clrscr();

	printf("\n\nEnter first number : ");
	scanf("%d",&no1);

	printf("enter second number : ");
	scanf("%d",&no2);

	printf("\n");

	if(no1 > no2){

	  printf("%d is maximum number...",no1);

	}
	else{

	  printf("%d is maximum number...",no2);

	}

	getch();
}