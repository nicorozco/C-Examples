#include <stdio.h>
#define EPSILON 1e-14
#include "mathlib.h"
//defining static variable iters
static int iters = 0;

// pi_bbp() will compute the approximation of pi and track the number of computed terms by static variable local to file
double pi_bbp(void)
{
        //code sanitazion 
        iters = 0;
        //value used to dictate the run of the while loop
        int bbp = 1;
        //values of the terms in the beginning 
        double sixteen_to_the_k = 16.0;
        double term0 = 1.0;
        double term1 = 4.0 / 1.0;
        double term2 = 2.0 / 4.0;
        double term3 = 1.0 / 5.0;
        double term4 = 1.0 / 6.0;
        double eight_to_the_k = 8.0;
        double k = 0;
        double sum = 0;
        // while loop to run to calculate pi
        while(bbp == 1)
        {
                //if statement to break out of loop 
                if ((absolute(sum)) < EPSILON)
                {
                        bbp = 0;
                }

                sum += term0 * (term1 - term2 - term3 - term4);
                k += 1;
                term0 = 1.0 / (sixteen_to_the_k * k);
                term1 = 4.0 / (eight_to_the_k * k) + 1;
                term2 = 2.0 / (eight_to_the_k * k) + 4;
                term3 = 1.0 / (eight_to_the_k * k) + 5;
                term4 = 1.0 / (eight_to_the_k * k) + 6;
                //compute next value of 16
                sixteen_to_the_k *= 16.0;
                iters += 1;

        }
        return sum;
}


// pi_bbp_terms() will just return the number of computer terms
int pi_bbp_terms(void)
{
	return iters;
}
