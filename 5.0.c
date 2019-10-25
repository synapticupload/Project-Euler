// www.projecteuler.net
// Problem 4
// 
// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <stdio.h>
#include <limits.h>

int main(void) {

    int fail = 0;
    int result = 0;
    
    // for every number to max integer size
    for (int i = 0; i < INT_MAX; i++) { 
        fail = 0;

        // divide it by all numbers from 1-20
        for (int j = 1; j <= 20; j++) {
            result = i % j; 
            
            // if remainder was something other than 0, it's not divisible
            if (result != 0) {
                fail = 1;
            }
        }

        // print numbers that are evenly divisible by all numbers from 1-20
        if (fail == 0) {
            printf("%d is divisible by the numbers...\n", i);
        }
    }
    
    return 0;
}
