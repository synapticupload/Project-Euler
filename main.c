#include "numlib.h"
#include <stdio.h>

int main(void) {
    
    for (unsigned long nums = 0; nums < 10; nums++) {
        if (primeCheck(nums) == 0) {
            printf("%lu is prime.\n", nums);
        }
    }
    return 0;
}
