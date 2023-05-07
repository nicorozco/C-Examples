#include <stdio.h>
int main(void)
{
	//example to learn how to use pointers and its utilization

//declaring a variable
int var = 15;
int *ptr1 = &var;
int *ptr2 = ptr1;

//access the value of a variable from a pointer to a pointer

printf("accessing adress of a throught pointer: %p\n",ptr1);

printf("access value of var throught pointer %d\n", *ptr1);


printf("accessing value of var throught pointer pointing at a pointer: %d\n",*ptr2);
	return 0;
}
