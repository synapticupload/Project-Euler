// Problem 3
// what is the largest prime factor of 600,851,475,143?

#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>
   
int main(void) {

    uint64_t number = 600851475143;
    uint64_t largest_prime = 0;
    uint64_t mody = 0;

    // for every number up to our number
    for (uint64_t i = 1; i < number; i++) {

        // check if factor
        mody = number % i;
        if (mody == 0) {
            
            // check if prime, see if it can be divided by a num not itself or 1
            for (uint64_t j = 2; j <= i; j++) {

                // if divisible by something other than itself or 1
                if ((i % j == 0) && i != j) {
                    
                    // break immediately and move on instead of dividing more
                    break;
                }

                // if no break, then update number, it was prime
                largest_prime = i;                       
                printf("prime factor found: %lld\n", (long long int) largest_prime);
            }
        }              
    }   

    return 0;
}
