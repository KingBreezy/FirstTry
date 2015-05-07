#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
main(){
    system("COLOR 3A");
	char ans;
	char Bingo[] ={'B','I','N','G','O'};
	int a;
	srand(time(NULL));
	printf("Welcome to Bingo would you wish to play? y/n\n");
	fflush(stdin);
	ans=getchar();
	while(ans=='y'){
		a=rand()%99+1;
		printf("The number is %c%d\n", Bingo[rand()%5],a);
		printf("Continue calling numbers? y/n\n");
		fflush(stdin);
		ans=getchar();
		if (ans !='y'){
            system("COLOR 9B");
			printf("BINGO!!!!!!!!!!!!!!!!!!!!!!");
			printf("We hope you enjoy your prize");
			break;
		}
	}
}
