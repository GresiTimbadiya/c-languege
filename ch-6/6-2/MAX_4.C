#include<stdio.h>
#include<conio.h>

main(){
	int a,b,c,d;
	clrscr();

	printf("Enter number of a : ");
	scanf("%d",&a);

	printf("Enter number of b : ");
	scanf("%d",&b);

	printf("Enter number of c : ");
	scanf("%d",&c);

	printf("Enter number of d : ");
	scanf("%d",&d);

	if(a==b && b==c && a==c && a==d && b==d && c==d){

		printf("All are equal....");

	}
	else if(a==b || b==c || a==c || a==d || b==d || c==d){

		printf("Both are equal...");

	}
	else if(a==b==c || a==b==d || b==c==d || a==c==d){

		printf("3 number are equal...");
	}
	else{
		if(a>b){
			if(a>c){
				if(a>d){
					printf("%d is maximum",a);
				}
				else{
					printf("%d is maximum",d);
				}
			}
			else{
				if(c>d){
					printf("%d is maximum",c);
				}
				else{
					printf("%d is maximum",d);
				}
			}
		}
		else{
			if(b>c){
				if(b>d){
					printf("%d is maximum",b);
				}
				else{
					printf("%d is maximum",d);
				}

			}
			else{
				if(c>d){
					printf("%d is maximum",c);
				}
				else{
					printf("%d is maximum",d);
				}
			}

		}




	}

	getch();
}