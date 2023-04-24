#include <stdio.h>
#include <stdlib.h>
// we will use this to act as rolling the pig
// creating a data type for pig position
typedef enum {SIDE,RAZORBACK,TROTTER,SNOUTER,JOWLER} Positions;

//create a constant(doesn't change) array of type Positions
int main(void){

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
int points[1] = {0};

//set random seet
srandom(2023);

//rolling pig
	int randomNum;
	//first roll
	do{ 
		randomNum = (random() % 7);
	} while (randomNum != pig[0]); 
	{

		int positionNum = randomNum;

		switch(positionNum)
		{
		//case 0 is the value of SIDE
			case 0:
				printf("%s\n",players[0]);
				printf(" roll 0, has %d",points[0]);
					break;
		//case 1 is the value of RAZORBACK
			case 1:
				//update points by 10
				points[0] = points[0] + 10;
				printf("roll 10, has %d",points[0]);
		//case 2 is the value of TROTTER
			case 2:
				//upate points 10
				points[0] = points[0] + 10;

		//case 3 is the value SNOUTER
			case 3:
				//update points 15
				points[0] = points[0] + 15;

		//case 4 is the value of JOWLER
			case 4:
			//update points by 5
				points[0] = points[0] + 5;
		}

	}


	return 0;
}


