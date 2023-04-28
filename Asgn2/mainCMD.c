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
			//runs all test
				saw_dash_x = 1;
				saw_dash_y = 1;
				break;
			case 'e':
			// runs e approcimation test	
				saw_dash_x = 1;
				break;
			case 'b':
			// runs bailber pi approximation test
				saw_dash_y = 1;
				break;
			case 'm':
			//runs Madhava pi approximation tets
			
			case 'r':
			//runs euler sequence pi approximation test

			case 'v':
			//runs viete pi approximation test

			case 'w':
			//runs wallis pi approximation test
			
			case 'n':
			//runs newton-raphson square root approximation tests

			case 's':
			//enables printing of statsics to see computer terms and factors for all tested functions
			// just call the terms functions of all
			
			case 'h':
			// display a help message detailing program usage, must be specific and redeable
					
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
