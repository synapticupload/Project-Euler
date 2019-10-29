//
// https://projecteuler.net/problem=10
//
// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.
//

#include <stdio.h>

int main(void) {
    
    // I start the sum at 2, since 2 is a prime number, and start loop at 3
    __uint64_t sum = 2;     
    __uint64_t prime = 0;
    __uint64_t max = 2000000;
    
    // increment by 2, since prime numbers can't be even anyway
    for (__uint64_t i = 3; i <= max; i += 2) {
       
        // set flag to true, my code will try to disprove this.
        prime = 1;

        // check divisibility using each number from 1-i
        for (__uint64_t j = 1; j <= i; j++) {
            
            // if divisible by something not 1 or itself...
            if (i % j == 0 && j != i && j != 1) {
            
                // break this loop and keep checking
                prime = 0;
                break;
            }
        }

        // if prime test passed, increment sum by prime number
        if (prime == 1) {
            sum += i;
        }
    }

    // print result and exit
    printf("%lu\n", sum);
    return 0;
}
