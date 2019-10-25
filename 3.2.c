// https://www.projecteuler.net
//
// Problem 3
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include <stdio.h>

int main(void) {
    
    long number = 600851475143; 
    long result = 0;
    long largest_prime = 0; 

    for (long i = number; i > 1; i--) {
        if (number % i == 0) {
            result = i;
            for (long j = 2; j <= result; j++) {    // check for primeness
                if (result % j != 0) {
                    continue;
                }
                if (result % j == 0 && result != j) {
                    break;
                }
                largest_prime = result;
                printf("largest prime; %ld\n", largest_prime);
            }
        }
    }
    
    return 0;
}
