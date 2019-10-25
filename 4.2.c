#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// tests if it is a palindrome
int testPlndrm(int x) {
    int tmp = x;
    int len = 0;

    // part 1: I chose to convert number to an array
    // -------------------------------------------------------------------------
    
    // get length of the number manually:
    while (tmp / 10 != 0) {
        len++;
        tmp = tmp / 10;
    }
    len++;
   
    // allocate heap space for array using length
    char *array = (char *) calloc(len, sizeof(char));
    
    // set up divisor for conversion
    int g = 1;
    for (int f = 0; f < len - 1; f++) {
        g = g * 10;
    }

    // modulus of number and divisor will yield each number place
    int h = 0;
    tmp = x;
    for (h = 0; h < len; h++) {
        array[h] = tmp / g;
        tmp = tmp % g;
        g = g / 10;
    }

    // part 2: I compared the arrays against each other
    // ------------------------------------------------------------------------ 
    

    // check if it's a palindrome by looking inward from each array end
    int k = 0;
    int l = len - 1;
    int palindrome = 0;
    for (k = 0; k < len; k++) {
        if (array[k] == array[l]) {
            palindrome = 1;
        }
        else {
            palindrome = 0;
            break;
        }
        l--;
    }

    // if it's a palindrome, return it
    if (palindrome == 1) {
        return x;
    } 
    else {
        return -1;
    }
}

int main(void) {
    int maxPlndrm = 0;
    int newPlndrm = 0;

    // for each combination of x * y where x or y can be from 100-999, check
    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            newPlndrm = testPlndrm(i * j);

            // store palindrome of it's bigger
            if (newPlndrm > maxPlndrm) {
                maxPlndrm = newPlndrm;
            }
        }
    }

    // print final result
    printf("Max palindrome: %d\n", maxPlndrm);
    return 0;
}
