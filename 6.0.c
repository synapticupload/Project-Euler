// https://projecteuler.net/problem=6
// 
// The sum of the squares of the first ten natural numbers is,
//     12 + 22 + ... + 102 = 385
// 
// The square of the sum of the first ten natural numbers is,
//     (1 + 2 + ... + 10)2 = 552 = 3025
// 
// Hence the difference between:
//     1. the sum of the squares of the first ten natural numbers and 
//     2. the square of the sum 
// is 3025 − 385 = 2640.
// 
// Find the difference between:
//     1. the sum of the squares of the first one hundred natural numbers 
//     2. the square of the sum.

#include <stdio.h>
#include <limits.h>

int main(void) {

    unsigned long long totalSquare = 0;
    unsigned long long totalSum = 0;
    
    for (unsigned long long i = 1; i <= 100; i++) {
        totalSquare += i*i;
        totalSum += i;
    }
    totalSum = totalSum * totalSum;
    
    printf("total square: %llu\n", totalSquare);
    printf("total sum   : %llu\n", totalSum);
    printf("%llu\n", totalSum - totalSquare);

    return 0;
}
