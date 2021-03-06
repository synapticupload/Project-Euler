#include <stdio.h>
#include <stdlib.h>
#include "strmath.h"

// TODO:
//  get biggest string number
//  get smallest int

// count arguments
int argCheck(int argCount) {
    if (argCount <= 1) {
        printf("Input required.\n");
        return -1;
    }
    else if (argCount >= 4) {
        printf("Too many arguments.\n");
        return -2;
    }
    return 0;
}

int isArrayNumeric(char *src1) {
    for (int i = 0; src1[i] != '\0'; i++) {
        if (src1[i] > 57 || src1[i] < 48) {
            printf("Array is not numeric\n");
            return -1;
        }
    }
    return 0;
}

int getArrayLength(char *src1) {
    int length = 0;
    for (int i = 0; src1[i] != '\0'; i++) {
        length++;
    } 
    return length;
}


char* convertToHeap(char * src) {
    int len = getArrayLength(src);
    char *parg = (char *) calloc(len, sizeof(char));
    for (int i = 0; i < len; i++) {
        parg[i] = src[i] - 48;
    }
    return parg;
}

// print array as characters
void printAlphaArray(char *src1) {
    for (int i = 0; src1[i] != '\0'; i++) {
        printf("%c", src1[i]);
    }
    return;
}

// print array as numbers
void printNumArray(char *src1) {
    for (int i = 0; src1[i] != '\0'; i++) {
        printf("%d", src1[i]);
    }
    printf("\n");
    return;
}

// TODO:
//  accept an array of pointers to ints, so it can be indefinite
//      return the pointer
int getBiggestInt(int x, int y) {
    int z = x;
    if (y > x) {
        z = y;
    }
    return z;
}
// TODO:
//  accept an array of pointers to ints, so it can be indefinite
//      return the pointer
int getSmallestInt(int x, int y) {
    int z = x;
    if (y < x) {
        z = y;
    } 
    return z;
}
char* getBiggestArray(char * src1, char * src2) {
    int len1 = getArrayLength(src1);
    int len2 = getArrayLength(src2);     
    if (len1 == len2) {
        return NULL;
    }
    else if (len1 > len2) {
        return src1;
    }
    else if (len1 < len2) {
        return src2;
    }
}

// TODO:
char* getSmallestArray(char * src1, char * src2) {
    int len1 = getArrayLength(src1);
    int len2 = getArrayLength(src2);
    if (len1 == len2) {
        return NULL;
    }
    else if (len1 < len2) {
        return src1;
    }
    else if (len1 > len2) {
        return src2;
    }

}

// TODO:
//  change loop to process until smallest length is reached
//  finish out the rest from the larger number, don't do addition on those
//  find the biggest array out of two arrays
//      helps logic later to auto-handle which number is bigger



// Accepts the following:
//      1. pointer to number 1
//      2. pointer to number 2
//      3. pointer to destination buffer

char * addNumArrays(char *src1, char *src2, char *dst1) {
    
    // create pointers to array sizes
    char * lgArray = getBiggestArray(src1, src2);
    char * smArray = getSmallestArray(src1, src2);

    // get lengths of arrays
    int lgArrayLen = getArrayLength(lgArray);
    int smArrayLen = getArrayLength(smArray);

    // create arithmetic variables
    int result = 0;
    int carry = 0;

    // perform arithmetic up until indexes of smallest array length
    for (int i = smArrayLen; i >= 0; i--) {
        result = smArray[i] + lgArray[i] + carry;
        
        if (result < 10) {
            dst1[i] = result;
            carry = 0;
        }
        else if (result >= 10) {
            dst1[i] = (result % 10);
            carry = 1;
        }
    }
 
    // this loop accounts for the larger numbers digits, past the smaller number's length
    for (int i = lgArrayLen - smArrayLen; i >= 0; i--) {
        result = lgArray[i] + carry;
        if (result < 10) {
            dst1[i] = result;
        }
        else if (result >= 10) {
            dst1[i] = (result % 10);
            carry = 1;
        }
    }
       
    return dst1;
}

void reverseString(char *src1) {
    int len = getArrayLength(src1);
    char tmp = 0;
    for (int i = (len / 2); src1[i] != '\0'; i++) {
        tmp = src1[i];         // push front value
        src1[i] = src1[len];    // replace front value
        src1[len] = tmp;       // pop front value to back value
        len--;                  // subtract length
    }
}
