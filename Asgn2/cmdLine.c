#include <stdio.h>
int main(int argc, char **argv){

	//printing out the number of arguments
	printf("argc = %d\n", argc);

	//for loop to print out the string argument
	for ( int i = 0; i < argc; i++)
	{
		printf("arg[%d] = '%s'\n",i,argv[i]);
	
	}






	return 0;
}
