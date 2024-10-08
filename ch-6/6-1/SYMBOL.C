#include<stdio.h>
#include<conio.h>

main(){
	int value;
	clrscr();

	printf("Enter any number or symbol or alphabet : ");
	scanf("%d",&value);

	if(value){

		printf("\n%d is alphabet...",value);

	}
	else if(value>=48 && value<=57){

		printf("\n%d is digit...",n);

	}
	else{

		printf("\n%d is symbol...",n);

	}

	getch();
}