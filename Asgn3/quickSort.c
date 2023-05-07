#include <stdio.h>

//function to do the actual swapping
void swap(int *x, int *y);

//function that does the actuall quick sort
void quicksort(int array[],int lenght);

//function that does the recursion step
void quicksort_recursion(int array[], int low,int high);

//function that does the paritioning
int partition(int array[],int low,int high);


int main(void)
{

	//test array 
	int a[] = {10,11,23,44,8,15,3,9,12,45,56,45,45};
	int lenght = 13;

	//calling function
	quicksort(a,lenght);

	//printing out array
	for (int i = 0; i < lenght; i++)
	{
		printf("%d ",a[i]); 
		printf("\n");
	}
	return 0;
}

void swap(int *x, int *y)
{
	//declare temporary variable to keep old value of x
	int temp = *x;
	
	//over write the value of x with value y
	*x = *y;

	// over write y with the old value x
	*y = temp;

}

void quicksort(int array[],int lenght)
{
	//call recursion function inside of quicksort
	// 0 is the beginning
	// lenght - 1 is the last element
	quicksort_recursion(array, 0, lenght - 1);  

}
void quicksort_recursion(int array[], int low, int high)
{
	if (low < high)	
	{	
		//gives pivot index
		int pivotIndex = partition(array,low,high);
		//quick sort of left side
		quicksort_recursion(array,low,pivotIndex - 1);
		//quick sort of right side
		quicksort_recursion(array,pivotIndex + 1, high);
	}
}

int partition(int array[], int low, int high)
{
	//ex
	//          j
	//3 1 2 4 6 7 [5] --> pivo_point
	//      i
	
	//set the pivot point to be the last value
	int pivot_point = array[high];
	
	//set i to be the first value
	int i = low;

	//for loop to index i and j for swapping
	//if j is not less than pivot point it will increa by +1
	for (int j = low; j < high; j++)
	{
	  //check if the value is at index j is less than or equal to the pivot point	
	  if (array[j] <= pivot_point)
          {	
		// if the value at j is less than the pivot point the value at index[i] will switch with the value at index[j]  
		swap(&array[i], &array[j]);
		//and increment the i by 1
		i++;
	  }
	}
	// when j is not less than the pivot point
	// the pivot point will swap with the value of index of i
	swap( &array[i], &array[high]);

	//return the pivot index
	return i;
	

}


