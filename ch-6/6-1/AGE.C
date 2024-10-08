#include<stdio.h>
#include<conio.h>

main(){
	int age;
	clrscr();

	printf("\n\nEnter your age : ");
	scanf("%d",&age);

	printf("\n");

	if(age>=18){

	  printf("you are valid for vote...");

	}
	else{

	  printf("you are not valid for vote...");

	}

	getch();
}