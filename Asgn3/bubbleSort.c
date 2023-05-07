#include <stdio.h>

//small program to understan how bubble sort works

//declaring bubble sort function

void bubble_sort( int a[], int lenght);

int main(void)
{
//declaring array
int a[] = {5,3,7,8,12,9,10,2,1};
//calling the function
bubble_sort(a,9);
 for ( int p = 0; p < 8; p++)
 {
	printf("a[%d] = %d\n",p, a[p]);
 } 

	return 0;

}

//defining function

void bubble_sort(int a[], int lenght)
{

// for loop that loops around as many times as their is elements
for ( int i = 0; i < lenght; i++)
{

	//another for loop that goes throught two elements at a time and swaps
	// we do lenght - 1 because the last element doesn't have a next element to compare to 
	for (int j = 0; j < (lenght-1);j++)
	{
		// if state to check if the current element is greater than the next
		if ( a[j] > a[j+1])
		{

			// we store the value
			int temp = a[j];
			// we over write the current value to next as it's smaller
			a[j] = a[j+1];
			//we then over write the value in the next value index with the larger number
			a[j+1] = temp;
		
		}

	}




}
}
