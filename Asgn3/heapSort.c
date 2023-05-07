#include <stdio.h>
//declaring functions

//function the swap values
void swap(int *x, int *y);

//function to build the actual heap node

//function to check the max heap of every parent node
void maxheap_node(int a[], int rootnode, int size);

//function to build the actual max heap array
void maxheap(int a[], int first, int last);

//function that actually calls heapsort
void heapsort(int a[], int size);

int main(void)
{

	//creating a test array
	int a[] = {6,14,3,26,8,18,21,9,5};
	//calling max heap
	maxheap(a,0,9);
	heapsort(a,9);
	printf("Sorted Array: \n");
	for (int i = 1; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	//calling heap sort



	return 0;
}

void heapsort(int a[], int size)
{

	for (int i = size; i >= 2 ; i--)
	{
		swap(&a[1],&a[i]);
		maxheap_node(a,1,i-1);
	}


}

void swap(int *x,int *y)
{
	//store old value x
	int temp = *x;
	//over write the value of x with y
	*x = *y;
	//over write the value of y with the old value of x
	*y = temp;
	
}

void maxheap(int a[], int first, int last);
{	
	//for loop to create max heap checks for each parent node
	//i = the amound of parent nodes
	//we decrement that value until we reached the last parent node
	for (int i = last/2; i > first; i--)
	{
		maxheap_node(a,i,last);
	}
}

void maxheap_node(int a[],int rootnode, int size)
{

	// first set the first element to be the max heap/parent
	// the parent should be the max heap
	int parent = rootnode;
	
	//left child index
	int left = parent * 2;

	//right child index
	int right = (parent * 2) + 1;
	
	//check left child againts max heap and checks to stop when they hit all the parent nodes
	//if the left child is bigger than set it to parent 
	if ( left <= size && a[left] >= a[parent])
	{
		parent = left;
	}

	//check right child againts max heap and checks to stop when they hit all the parent node
	// if the right child is greater than the parent swap values
	if ( right <= size && a[right] >= a[parent])
	{
		parent = right;
	}
	// if statement to check if the orginal rootnode is still the parent( max)
	// if its not the parent(max), swap with the new  parent(max)
	if ( rootnode != parent)
	{
		swap(&a[parent],&a[parent]);
		maxheap_node(a,parent,size);
	}
	
}

