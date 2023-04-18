#include <stdio.h>
int main(void)
{

	//declaring file pointer

	FILE *fPointer;

	//open a file to get input from
	
	fPointer = fopen("File.txt","r");
	
	// declare variables to store values
	// c is a character from the function getc()
		char c;
		int nl;
		
	// set c to get getchar()
	//getc() reads a single character from the current stream position and advances the stream position to the next character.
	//int getc(FILE *stream);

	//line counter	
		nl = 0;	
	// EOF value is -1
	 	for (c = fgetc(fPointer); c != EOF; c = fgetc(fPointer)) 
		{
	//use a if statement to check wether we have a new line by checking for the value '\n'
	// if we do have a value increase the value of nl by 1
		 if ( c == '\n'){
			nl++;
	 	}
	
	//close the file
		fclose(fPointer);
	//print out the line value
	 	printf("%d\n",nl);
	}


	return 0;
}
