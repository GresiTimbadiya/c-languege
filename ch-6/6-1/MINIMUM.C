#include<stdio.h>
#include<conio.h>

main(){
	int no1,no2;
	clrscr();

	printf("Enter any number : ");
	scanf("%d %d",&no1,&no2);

	if(no1 < no2){

	  printf("this number is minimum number : %d",no1);

	}
	else{

	  printf("this number is minimum number : %d",no2);

	}

	getch();
}