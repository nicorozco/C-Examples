#include <stdio.h>
int main(void) {

// declare variables to store values
	int c,nl;
// set c to get getchar()
//getchar() reads the next input character from a text stream and returns that as its value
	c = getchar();
	
	nl = 0;	
// use while look to keep checking if we're at end of file
// EOF value is -1
	while (c != EOF){

//use a if statement to check wether we have a new line by checking for the value '\n'
// if we do have a value increase the value of nl by 1
	 if ( c == '\n'){
		nl++;
	 }

	}

// at the end we want to print back the value of new line

	printf("%d\n",nl);










	return 0;
}
