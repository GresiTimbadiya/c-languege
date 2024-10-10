#include<stdio.h>
#include<conio.h>

main(){
	int a,b,c;
	clrscr();

	printf("Enter the value of a : ");
	scanf("%d",&a);

	printf("Enter the value of b : ");
	scanf("%d",&b);

	printf("Enter the value of c : ");
	scanf("%d",&c);

	printf("\n");

	(a==b && a==c && b==c)
				?  printf("All are equal...")
				:  (a==b || b==c || a==c)
							   ?  printf("Both are equal...")
							   :  (a<b)
		? (a<c)
			?  printf("%d is minimum...",a)
			:  printf("%d is minimum...",c)
		: (b<c)
			?  printf("%d is minimum...",b)
			:  printf("%d is minimum...",c);
	getch();
}