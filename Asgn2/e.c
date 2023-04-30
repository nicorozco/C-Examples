#include <stdio.h>
#define EPSILON 1e-14
#include "mathlib.h"
//defining static variable iters
static int iters = 0;
// contains the functions: e() and e_terms()
// e() will compute the approximation of e and track the number of computed terms by static variable local to file
double e(void)
{
		int euler = 1;
		iters = 0;
		double k = 1;
		double numerator = 1.0;
 		double denominator = 1.0; 
 		double sum = numerator/denominator;

	while (euler == 1)
	{
		double term = numerator / denominator;
		if ((absolute(term)) < EPSILON)
		{ 
			euler = 0;
		}
		denominator *= k + 1;
		k +=1;
		iters +=1;
		sum += term;

	}
	return sum;
}



// e_terms() will just return the number of computed terms
int e_terms(void)
{

	return iters;



}

int main(void)
{


	printf("This is the value of e: %f\n",e());
	printf("This is the value of iters: %d\n",e_terms());
	
}
