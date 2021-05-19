#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int guess;
	int randomnum;
	int i;
	time_t t;
	// initialization of random number generator
	srand((unsigned)time(&t));
	// get the random number
	randomnum= rand() %21;
printf("Hello, Welcome to this AMAZING NUMBER GUESSING game.\n\nHere I have guessed a number from 0-21. You have to guess the number in 5 tries.\n ");
printf("\n");
for (i=5; i>0; i--)
	{
		printf(" You have %d tr%s left.\n", i, i==1? "y": "ies" );
		printf("\nPlease enter the number you have guessed:");
		scanf("%d", &guess);
	if (randomnum==guess)
    {

	printf("\nCongratulations you have guessed it Right. YOU WONNN!!!");
	break;
    }
    	else if(guess<0 || guess>20)
		printf("\nI said the number should be between 0-20");
		else if(guess<randomnum)
        printf("\nThe required number is bigger than you have entered.");
		else if(guess>randomnum)
		printf("\nThe required number is smaller than you have entered.");
	}
        printf("\n");

    if(i==0){
    printf("\nYOU LOSE!!!. You have lost all of your 5 tries. The correct number was %d",randomnum);
    }
    printf("\n");

	return 0;
}
