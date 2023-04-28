#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv){

	//to store the return character from opt
	int ch;
	
	int saw_dash_x = 0;
	int saw_dash_y = 0;

	// while loop to get commands from the user
	while( (ch = getopt(argc, argv, "axy")) != -1)
	{
		//print statement to print out the value of ch
		printf("ch is %c\n",ch);
		switch (ch) 
		{

			case 'a':
			
				saw_dash_x = 1;
				saw_dash_y = 1;
				break;
			case 'x':
				saw_dash_x = 1;
				break;
			case 'y':
				saw_dash_y = 1;
				break;
				
		}
	}

	//if 1 means true, prints out what it seen
	if (saw_dash_x) 
	{
	
		printf("saw dash x\n");

	}

	if(saw_dash_y)
	{

		printf("saw dash x\n");
	}


	return 0;
}
