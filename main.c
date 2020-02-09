#include "strmath.h"

int main(int argc, char *argv[]) {

    int dstLen = 0;

    if (argCheck(argc) != 0) {
        return -1;
    }
    if (isArrayNumeric(argv[1]) != 0) {
        return -1;
    }

    char *parg1 = convertToHeap(argv[1]);
    char *parg2 = convertToHeap(argv[2]);
    char *parg3 = addNumArrays(parg1, parg2);

    printNumArray(parg3);
    reverseString(parg3);
    printNumArray(parg3); 

    return 0;
}
