#include <stdio.h>
#include <stdlib.h>
// we will use this to act as rolling the pig
// creating a data type for pig position
typedef enum {SIDE,RAZORBACK,TROTTER,SNOUTER,JOWLER} Positions;

//create a constant(doesn't change) array of type Positions
int main(void){

//user input for number of players
	int userPlayerNum;
	printf("Number of players (2 to 10)? ");
	scanf("%d", &userPlayerNum);

	if (userPlayerNum < 2)
	{	

		fprintf(stderr, "Invalid number of players. Using 2 instead.\n");
		userPlayerNum = 2;
	}

	

//user input for random seed
	long randomSeed;
	long userRanSeed;
	printf("Random-number seed? ");
	scanf("%ld",&userRanSeed);

	if (userRanSeed < 1) 
	{
		fprintf(stderr, "Invalid seee. Using 2023 instead.\n");
		userRanSeed = 2023;
		randomSeed = userRanSeed;
	}
	else
	{	
		randomSeed = userRanSeed;
	}
//setting randomseed to userinput
srandom(randomSeed);
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
	int p;
	int i;
	int randomNum;
	int winner = 0;
	int done = 0;

while (winner == 0)
{	
	//printf("Stage 1: no winner\n");
	//for player turn
	for (p = 0; p < userPlayerNum; p++) 
	{
	
		//printf("Stage 2: 1 whole round\n");

		// for indexing throught points and the player
		for (i = 0; i < userPlayerNum; i++)
		{		
			
			//update the value for the new player
			if(winner == 1)
			{
				done = 1;
			}
			else {

				done = 0;
				printf("%s\n",players[i]);

			}
		
			//while run while the position isn't(0), if it 0 they can't roll
	        	while (done == 0) 
			{	
								
				if (points[i] >= 100)
				{	
					printf("%s won!\n",players[i]);
					winner = 1;
					break;

				}
				//generates random number
				randomNum = (random() % 7);
				int positionNum = randomNum;
		
				//just checkign the positions and adding points
				switch(positionNum)
				{
						  
					//case 0and 1 2/7 probability is the value of SIDE
					case 0:
						printf(" roll 0, has %d\n",points[i]);
						done = 1;
						break;
					case 1:
						printf(" roll 0, has %d\n",points[i]);
						done = 1;
						break;
					//case 2 is the value of RAZORBACK
					case 2:
						//update points by 10
						points[i] += 10;
						printf(" roll 10, has %d\n",points[i]);
						done = 0;
						break;
					//case 3 is the value of TROTTER
					case 3:
						//upate points 10
						points[i] += 10;
						printf(" roll 10, has %d\n",points[i]);
						done = 0;
						break;
					//case 4 is the value SNOUTER
					case 4:
						//update points 15
						points[i] +=15;
						printf(" roll 15, has %d\n",points[i]);
						done = 0;
						break;
					//case 5 is the value of JOWLER
					case 5:
						//update points by 5
						points[i] += 5;
						printf(" roll 5, has %d\n",points[i]);
						done = 0;
						break;
					case 6:
						//update points by 5
						points[i] += 5;
						printf(" roll 5, has %d\n",points[i]);
						done = 0;
						break;

				}
			}
		} 
				
	}
}
	

	return 0;
}


