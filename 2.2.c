// https://projecteuler.net/problem=2
// 
// Each new term is generated by adding the previous two terms. 
// By starting with 1 and 2, the first 10 terms will be:
//     1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// By considering the terms whose values do not exceed four million, 
// find the sum of the even-valued terms.
// 
// NOTES:
//     I thought using subtraction was a different way to implement the usage of two variables.

#include <stdio.h>

int main(void) {
    __uint32_t sum = 0;
    __uint32_t prev = 1;
    __uint32_t curr = 0;

    for (curr = 2; curr <= 4000000;) {  // for each fib num under 4mil,
        curr = prev + curr;             //     calculate next one
        prev = curr - prev;             //     re-calculate old one

        if (curr % 2 == 0) {            //     if divisible by 2,
            sum += curr;                //         it's even, so sum it up
        }
    }
    printf("%u\n", sum);                // print final result
    return 0;
}
