#include<stdio.h>
#include<conio.h>

main(){
	int s1,s2,s3;
	clrscr();

	printf("\n\nEnter the marks of maths : ");
	scanf("%d",&s1);

	printf("\n\nEnter the marks of english : ");
	scanf("%d",&s2);

	printf("\n\nEnter the marks of science : ");
	scanf("%d",&s3);

	printf("\n");

	printf("the average mark  is : %d",(s1+s2+s3)/3);

	getch();
}