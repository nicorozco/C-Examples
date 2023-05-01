#include <stdio.h>
#include <stdlib.h>
#include "mathlib.h"
//defining static variable
static int iters = 0;
//defining constation of EPSILON
#define EPSILON 1e-14

// contains the functions: sqrt_newton() and sqrt_newton_iters()
// sqrt_newton() will compute the approximation the square root of the argument passed  and track the number of iterations taken by static variable local to file
double sqrt_newton(double x)
{
	int next_y = 1.0; 
	int y = 0.0;

	while ((absolute(next_y - y)) < EPSILON)
	{
		iters = 0;
		y = next_y;
		next_y = 0.5 * (y + x/y);
		iters += 1;
		
	}
	return next_y;
}
// sqrt_newton_iters() will just return the number of iterations taken

int sqrt_newton_iters(void)
{
	return iters;

}

