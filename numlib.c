// TODO: allow specification of sizing

#include "numlib.h"

// primality check of an unsigned long or uint64_t
int primeCheck(unsigned long num) {

    // TODO: implement using sieve of erastothenes

    // if 0 or 1, not prime
    if (num == 0 || num == 1) {
        return -1;
    }

    for (unsigned long j = 1; j <= num; j++) {
        if (num % j == 0 && j != num && j != 1) {
            return -1;
        }
    }
    return 0;
}
