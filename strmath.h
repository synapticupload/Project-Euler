#ifndef __MYLIB_H_
    #define _MYLIB_H_
    extern int argCheck(int argCount);

    // array checks
    extern int getArrayLength(char *src1);
    extern int isArrayNumeric(char *src1);

    // array conversion/storage
    extern int convertToHeap(char *src1);

    // array printing
    extern int printAlphaArray(char *src1);
    extern int printNumArray(char *src1);

    // helpers
    extern int getBiggestInt(int x, int y); // for length

    // array addition
    extern char * addNumArrays(char *src1, char *src2);
    

#endif
