#include <stdio.h>
#include <stdlib.h>
#include "strmath.h"

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

int getArrayLength(char *src1) {
    int length = 0;
    for (int i = 0; src1[i] != '\0'; i++) {
        length++;
    } 
    return length;
}

int isArrayNumeric(char *src1) {
    for (int i = 0; src1[i] != '\0'; i++) {
        if (src1[i] > 57 || src1[i] < 48) {
            printf("Arrays not numeric\n");
            return -1;
        }
    }
    return 0;
}

char * convertToHeap(char * src) {
    int len = getArrayLength(src);
    char *parg = (char *) calloc(len, sizeof(char));
    for (int i = 0; i < len; i++) {
        parg[i] = src[i] - 48;
    }
    return parg;
}

void printAlphaArray(char *src1) {
    for (int i = 0; src1[i] != '\0'; i++) {
        printf("%c", src1[i]);
    }
    return;
}

void printNumArray(char *src1) {
    for (int i = 0; src1[i] != '\0'; i++) {
        printf("%d", src1[i]);
    }
    printf("\n");
    return;
}
int getBiggestInt(int x, int y) {
    int z = x;
    if (y > x) {
        z = y;
    }
    return z;
}

char * addNumArrays(char *src1, char *src2) {
    int len = getBiggestInt(getArrayLength(src1), getArrayLength(src2));
    char *dst1 = (char *) calloc(len, sizeof(char));

    int result = 0;
    int carry = 0;

    for (int i = len; i >= 0; i--) {
        result = src1[i] + src2[i] + carry;
        if (result < 10) {
            dst1[i] = result;
            carry = 0;
        }
        else if (result >= 10) {
            dst1[i] = (result % 10);
            carry = 1;
        }
    }
    return dst1;
}
