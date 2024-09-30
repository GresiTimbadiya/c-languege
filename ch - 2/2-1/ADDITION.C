#include<stdio.h>
#include<conio.h>

main(){
	int a=12, b=3, ans=12%3;
	clrscr();
	printf("\n\n[1]  Addition of %d + %d = %d\n\n",a,b,a+b);
	printf("     Substraction of %d - %d = %d\n\n",a,b,a-b);
	printf("     Multiplication of %d * %d = %d\n\n",a,b,a*b);
	printf("     Divison of %d / %d = %d\n\n",a,b,a/b);
	printf("     Modulo of 12 and 3 = %d",ans);


	printf("\n\n\n\n[2]  -----------------\n");
	printf("     |               |\n");
	printf("     |               |\n");
	printf("     | %d * %d = %d |\n",a,a,a*a);
	printf("     |               |\n");
	printf("     |               |\n");
	printf("     -----------------\n");


	getch();

}