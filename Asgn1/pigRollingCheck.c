#include <stdio.h>
#include <stdlib.h>
// we will use this to act as rolling the pig
// creating a data type for pig position
typedef enum {SIDE,RAZORBACK,TROTTER,SNOUTER,JOWLER} Positions;

//create a constant(doesn't change) array of type Positions
int main(void){

//user input for number of players
	int userPlayerNum;
	printf("Number of players (2-10)?");
	scanf("%d", &userPlayerNum);
//user input for random seed 
	long userRanSeed;
	printf("Random-number seed? ");
	scanf("%ld",&userRanSeed);
//setting randomseed to userinput
	srandom(userRanSeed);
const Positions pig[7] = {
	SIDE,
	SIDE,
	RAZORBACK,
	TROTTER,
	SNOUTER,
	JOWLER,
	JOWLER
};	

char players[10][50] = {
	"Margaret Hamilton",
	"Katherine Johnson",
	"Joy Buolamwini",
	"Grace Hopper",
	"Adele Goldberg",
	"Annie Easley",
	"Jeannette Wing",
	"Mary Kenneth Keller",
	"Megan Smith",
	"Radia Perlman"};

//point system (currently just one player)
int points[10] = {0,0,0,0,0,0,0,0,0,0};

//rolling pig
	int i;
	int randomNum;
	//basically for each player
	for (i = 0; i < userPlayerNum; i++)
	{	
	//first roll
	do
	{	
		printf("%s\n",players[i]);
		randomNum = (random() % 7);
	} while (randomNum != pig[0]); 
	{
		int positionNum = randomNum;

		switch(positionNum)
		{
		//case 0 is the value of SIDE
			case 0:
				printf(" roll 0, has %d\n",points[i]);
					break;
		//case 1 is the value of RAZORBACK
			case 1:
				//update points by 10
				points[i] = points[i] + 10;
				printf(" roll 10, has %d\n",points[i]);
		//case 2 is the value of TROTTER
			case 2:
				//upate points 10
				points[i] = points[0] + 10;
				printf(" roll 10, has %d\n",points[i]);

		//case 3 is the value SNOUTER
			case 3:
				//update points 15
				points[i] = points[i] + 15;
				printf(" roll 15, has %d\n",points[i]);

		//case 4 is the value of JOWLER
			case 4:
			//update points by 5
				points[i] = points[i] + 5;
				printf(" roll 5, has %d\n",points[i]);
		}

	}
	}

	return 0;
}


