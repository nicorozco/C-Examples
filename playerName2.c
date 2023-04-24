#include <stdio.h>
int main(void){


	int userPlayerNum;
	printf("Enter player 2-10?\n");
	scanf("%d",&userPlayerNum);




	char playerName[10][50] = {
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

// create a for loop that prints out all the players name
//
	int i;
	for (i = 0; i < userPlayerNum; i++)
	{
		printf("Currently Playing: %s",playerName[i]);


	}
	return 0;
}
