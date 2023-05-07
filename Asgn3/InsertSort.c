#include <stdio.h>

//a small program to learn how to use Insert Sorting

//declaring function

void insertion_sort(int a[],int lenght);

int main(void)
{
 //making an array
 int a[] = {1,2,6,7,4,5,10,8};

 insertion_sort(a,8);
 for ( int j = 0; j < 8; j++)
 {
	printf("a[%d] = %d\n",j, a[j]);
 } 

	return 0;

}

//defining function

void insertion_sort(int a[], int lenght)
{

	//for loop for acessing the next element and previous element
	for ( int i = 1; i < lenght; i++)
	{
	
		// keep track of current element
		int currentElement = a[i];

		// index for previous element
		int p = i - 1;

		//while loop for shifting element
		while ( p >= 0 && a[p] > currentElement)
		{
			//shift the greater element in the smaller elements index by shifting to the smallers index
			a[p+1] = a[p];
			
			// and go back to the previous index of the previous elements
			p = p - 1;
			
		}
	// insert currentElement that is now smaller, into previous index
	a[p+1] = currentElement;
		
	}



}
