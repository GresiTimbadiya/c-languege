#include<stdio.h>
#include<conio.h>

main(){
	int a,b,c;
	clrscr();

	printf("Enter number of a : ");
	scanf("%d",&a);

	printf("Enter number of b : ");
	scanf("%d",&b);

	printf("Enter number of c : ");
	scanf("%d",&c);

	if(a==b && b==c && a==c){

		printf("All are equal....");

	}
	else if(a==b || b==c || a==c){

		printf("Both are equal...");

	}
	else{

		if(a<c){
			printf("%d is min");
		}
		else(b<c){
		       printf("%d is min");
		}


	}

	getch();
}