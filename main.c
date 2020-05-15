#include <stdio.h>
#include <stdlib.h>
#include "strmath.h"

int main(void) {
      
    char num1[6] = "919999";
      char num2[5] = "9899";

    // ERROR CHECK: array contents
    // -------------------------------------------------------------------------
    int result1 = isArrayNumeric(num1);
    int result2 = isArrayNumeric(num2);
    if (result1 == 0) {
        printf("Array 1 is numeric.\n");
    }
    else {
        printf("Array 1 is not numeric.\n");
        return -1;
    }
    if (result2 == 0) {
        printf("Array 2 is numeric.\n");
    }
    else {
        printf("Array 2 is not numeric.\n");
        return -2;
    }

    // CONVERT FROM ASCII TO NUMERIC FORM
    // -------------------------------------------------------------------------
    char *new1 = convertToHeap(num1);
    char *new2 = convertToHeap(num2);
    printf("Created new array: ");
    printNumArray(new1);
    printf("Created new array: ");
    printNumArray(new2);

    // GET ARRAY LENGTHS
    // -------------------------------------------------------------------------
    int lgArrayLen = getArrayLength(getBiggestArray(new1, new2));
    int smArrayLen = getArrayLength(getSmallestArray(new1, new2));
    printf("small array length: %d\n", smArrayLen);
    printf("large array length: %d\n", lgArrayLen);

    // GET POINTERS TO ARRAY SIZES
    // -------------------------------------------------------------------------
    char * lgArray = getBiggestArray(new1, new2);
    char * smArray = getSmallestArray(new1, new2);
    printf("Small array: ");
    printNumArray(smArray);
    printf("Large array: ");
    printNumArray(lgArray);


    // CREATE DEST ARRAY
    // -------------------------------------------------------------------------
    char *dst = (char*)calloc(lgArrayLen + 1, sizeof(char));
    printf("Destination length: %d\n", lgArrayLen + 1);

    int result = 0;
    int carry = 0;

    int diff = lgArrayLen - smArrayLen;
    printf("Differnce: %d\n", diff);


// close...
    for (int i = (lgArrayLen - i); i >= diff; i--) {
        result = lgArray[i] + smArray[i - diff] + carry;
        if (result < 10) {
            dst[i + 1] = result;
            carry = 0;
        }
        else if (result >= 10) {
            dst[i + 1] = (result % 10);
            carry = 1;
        }
    }

//    for (int i = (diff - 1); i >= 0; i--) {
//        result = lgArray[i] + carry;
//        if (result < 10) {
//            dst[i] = result;
//        }
//        else if (result >= 10) {
//           dst[i] = (result % 10);
//           carry = 1;
//        }
//    }

    printf("Finished calculating.........................\n");
    printf("Sum: ");

    for (int i = 0; i <= lgArrayLen; i++) {
        printf("%d", dst[i]);
    }

    return 0;
}
