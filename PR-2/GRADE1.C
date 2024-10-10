#include<stdio.h>
#include<conio.h>

main(){
	int mark;
	char grade;
	clrscr();

	printf("\nEnter your mark (out of 100) : ");
	scanf("%d",&mark);

	(mark>=91 && mark<=100)

		?   grade ='A'
		:   (mark>=81 && mark<=90)

			?    grade= 'B'
			:    (mark>71 && mark<=80)

				?    grade= 'C'
				:    (mark>=61 && mark<=70)

					?    grade= 'D'
					:    (mark>=41 && mark<=60)

						?    grade= 'E'
						:    (mark>=33 && mark<=40)
							?    grade= 'E'
							:    (grade ='F');


	switch(grade){

		case 'A':
			clrscr;
			printf("\nExcellent work !!!");
			break;
		case 'B':
			clrscr;
			printf("\nWell done !!!");
			break;
		case 'C':
			clrscr;
			printf("\nGood job !!!");
			break;
		case 'D':
			clrscr;
			printf("\nYou passed !!!");
			break;
		case 'E':
			clrscr;
			printf("\nYou passed, but you could do better !!!");
			break;
		case 'F':
			clrscr;
			printf("\nSorry you are faild !!!");
			break;
	}

	if(grade>='A' && grade<='E'){

		printf("\n\n\tCongratulations !! You are aligible for the next level");
	}
	else{
		printf("\n\n\tPlease try again next time.... ");

	}




	getch();
}