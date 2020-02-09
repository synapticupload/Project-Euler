#ifndef __MYLIB_H_
    #define _MYLIB_H_
    extern int argCheck(int argCount);

    // array checks
    extern int getArrayLength(char *src1);
    extern int isArrayNumeric(char *src1); 

    // array conversion/storage
    extern char* convertToHeap(char *src1);
    extern void reverseString(char *src1);

    // array printing
    extern void printAlphaArray(char *src1);
    extern void printNumArray(char *src1);

    // helpers
    extern int getBiggestInt(int x, int y); // for length
    extern int getSmallestInt(int x, int y); // for length
    extern char* getSmallestArray(char *src1, char *src2);
    extern char* getBiggestArray(char *src1, char *src2);

    // add numbers that are stored as arrays
    extern char * addNumArrays(char *src1, char *src2);

#endif
