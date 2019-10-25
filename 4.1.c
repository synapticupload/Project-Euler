#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

    // initialize main variables
    //--------------------------------------------------------------------------
    int num = 10101;
    int tmp = 0;

    int len = 0;
    tmp = num;

    // get "length" of integer
    //--------------------------------------------------------------------------
    while (tmp / 10 != 0) {
        len++;
        tmp = tmp / 10;
    }
    len++;

    // allocate heap
    //--------------------------------------------------------------------------
    char *array = (char*)calloc(len, sizeof(char));

    // set up divisor for conversion
    //--------------------------------------------------------------------------
    int g = 1;
    for (int f = 0; f < len-1; f++) {
        g = g * 10;
    }
        
    int h = 0;
    tmp = num;

    // convert number to array by using division and modulus
    //--------------------------------------------------------------------------
    printf("Stored: ");
    for (h = 0; h < len; h++) {
        array[h] = tmp / g;
        printf("%d", array[h]);
        tmp = tmp % g;
        g = g / 10;
    }
    printf("\n");    

    int k = 0;
    int l = len-1;
    int palindrome = 0;

    // check array if palindrome
    //--------------------------------------------------------------------------
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
    if (palindrome == 1) {
        printf("It's a palindrome\n"); 
    }
    
    return 0;
}
