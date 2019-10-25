// https://projecteuler.net/problem=7
// 
// what is the 10001st prime number?
//

#include <stdio.h>
#include <limits.h>


int main(void) {
    
    unsigned long long i = 0;   // number
    unsigned long long j = 0;   // divisors
    unsigned long long k = 0;   // prime number tally
    int prime = 1; // prime flag

    // for every number until we've reached the 10001st prime number
    for (i = 2; k <= 10001; i++) { 

        prime = 1; // (set to be a prime at first until we prove otherwise)

        // test primeness
        // for every number up until the number we're testing
        for (j = 1; j <= i; j++) {

            // if it's evenly divisible by something besides itself or 1
            if ((i % j == 0) && j != 1 && j != i) {
                
                // it's not prime, continue on to next number
                prime = 0;
                break;
            }
        }

        // if it passed our prime check, increment prime tally, print it
        if (prime == 1) {
            k++;
            printf("Prime Number #%llu:\t%llu\n", k, i);
        }
    }
    return 0;
}
