#include <stdio.h>
#include <unistd.h>
#define OPTIONS "aebmrvwnsh"
int main(int argc, char **argv){


	
	//to store the return character from opt
	int ch;
	// to store the value for the if statements at the bottom
	int saw_a = 0;
	int saw_e = 0;
	int saw_b = 0;
	int saw_m = 0;
	int saw_r = 0;
	int saw_v = 0;
	int saw_w = 0;
	int saw_n = 0;
	int saw_s = 0;
	int saw_h = 0;
	
	if(argc == 1)
	{
		//print statements to help the user use the program
		printf("SYNOPSIS\n   A test harness for a small numerical library.\n");
		printf("\nUSAGE \n   ./mathlib-test-arm -[%s]\n",OPTIONS);
		printf("\nOPTIONS\n  -a   Runs all tests. \n  -e   Runs e test. \n  -b   Runs BBP pi test. \n  -m   Runs Madhava pi test. \n  -r   Runs Euler pi test. \n  -v   Runs Viete pi test. \n  -w   Runs Wallis pi test. \n  -n   Runs Newton square root tests. \n  -s   Print verbose statistics. \n  -h   Display program synopsis and usage.");

	
	}
	// while loop to get commands from the user
	while( (ch = getopt(argc, argv, OPTIONS)) != -1)
	{
		switch (ch) 
		{

			case 'a':
			//runs all test
				saw_e = 1;
				saw_b = 1;
				saw_m = 1;
				saw_r = 1;
                		saw_v = 1;
   				saw_w = 1;
				saw_n = 1;
				break;
			case 'e':
			// runs e approcimation test	
				saw_e = 1;
				break;
			case 'b':
			// runs bailber pi approximation test
				saw_b = 1;
				break;
			case 'm':
			//runs Madhava pi approximation tets
				saw_m = 1;
				break;
			case 'r':
			//runs euler sequence pi approximation test
				saw_r = 1;
				break;
			case 'v':
			//runs viete pi approximation test
				saw_v = 1;
				break;
			case 'w':
			//runs wallis pi approximation test
				saw_w = 1;
				break;
			case 'n':
			//runs newton-raphson square root approximation tests
				saw_n = 1;
				break;
			case 's':
			//enables printing of statsics to see computer terms and factors for all tested functions
			// just call the terms functions of all
				saw_s = 1;
				break;
			case 'h':
			// display a help message detailing program usage, must be specific and redeable
				saw_h = 1;
				break;
				
			default: 
			//print out error message
				printf("this is an error message");
				break;
		}	
	}

	//if 1 means true, prints out what it seen
	if (saw_h) 
	{
		printf("SYNOPSIS\n   A test harness for a small numerical library.\n");
		printf("\nUSAGE \n   ./mathlib-test-arm -[%s]\n",OPTIONS);
		printf("\nOPTIONS\n  -a   Runs all tests. \n  -e   Runs e test. \n  -b   Runs BBP pi test. \n  -m   Runs Madhava pi test. \n  -r   Runs Euler pi test. \n  -v   Runs Viete pi test. \n  -w   Runs Wallis pi test. \n  -n   Runs Newton square root tests. \n  -s   Print verbose statistics. \n  -h   Display program synopsis and usage.");

		
	}

	if(saw_e)
	{

		printf("run e\n");
	}
	
	
	if(saw_b)
	{

		printf("run bailey\n");
	}

	
	if(saw_m)
	{

		printf("run madhava\n");
	}

	
	if(saw_r)
	{

		printf("run euler\n");
	}

	
	if(saw_v)
	{

		printf("run viete\n");
	}
	
	if(saw_w)
	{

		printf("run wallis\n");
	}
	
	if(saw_n)
	{

		printf("run newton\n");
	}
	if(saw_s)
	{
		
		printf("printing out all statistics\n");
	}




	return 0;
}
