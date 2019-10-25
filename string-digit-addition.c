#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    // TODO
    // check for leading 0s - currently numbers must be same length
    // get lengths
    //      get difference of arg lengths
    //      add 0s to front of first number
    //      stop once smaller number's most significant digit reached
    //      make sure to follow through if carry flag is set

    // when adding, keep differnce of string lengths in a variable

    // error checks
    // ------------------------------------ //
    if (argc <= 1) {                        // check for no args
        printf("Input required.\n");        //
        return -1;                          //
    }                                       //
    else if (argc >= 4) {                   // check for 3+ args
        printf("Too many arguments.\n");    //
        return -1;                          //
    }                                       //

    int len1 = 0;
    int len2 = 0;
    int len3 = 0;

    // argument1 setup
    // ------------------------------------------------ //
    for (int i = 0; argv[1][i] != '\0'; i++) {          // get arg1 length
        if (argv[1][i] > 57 || argv[1][i] < 48) {
            printf("Argument has non-digits.\n");
            return -1;
        }
        len1++;                                         //
    }                                                   //
    printf("size of arg 1: %d\n", len1);                //
    char *parg1 = (char*)calloc(len1, sizeof(char));    // create heap
    for (int i = 0; i < len1; i++) {                    //
        parg1[i] = argv[1][i] - 48;                     // stash, convert to int
    }                                                   //
    printf("Ingested arg 1: ");                         // print results
    for (int i = 0; i < len1; i++) {                    //
        printf("%d", parg1[i]);                         //
    }                                                   //
    printf("\n");                                       //


    // argument2 setup
    // ------------------------------------------------ //
    for (int i = 0; argv[2][i] != '\0'; i++) {          // get arg2 length
        if (argv[2][i] > 57 || argv[2][i] < 48) {
            printf("Argument has non-digits.\n");
            return -1;
        }
        len2++;                                         // 
    }                                                   //
    printf("size of arg 2: %d\n", len2);                //
    char *parg2 = (char*)calloc(len2, sizeof(char));    // create heap
    for (int i = 0; i < len2; i++) {                    //
        parg2[i] = argv[2][i] - 48;                     // stash, convert to int
    }                                                   //
    printf("Ingested arg 2: ");                         //  print results
    for (int i = 0; i < len2; i++) {                    // 
        printf("%d", parg2[i]);                         //
    }                                                   //
    printf("\n");                                       //

    // result array setup    
    // ------------------------------------------------ //
    len3 = len2;                                        // find largest string
    if (len1 > len2) {                                  //  
        len3 = len1;                                    //
    }                                                   //
    len3++;                                             // may need carry space
    char *parg3 = (char*)calloc(len3, sizeof(char));    // allocate result heap


    int additionResult = 0;
    int carry = 0;

    // MAIN LOGIC
    // ------------------------------------------------ //
    for (int i = len3; i >= 0 ; i--) {                  // for each spot
        additionResult = parg1[i] + parg2[i] + carry;   //     add
        if (additionResult < 10) {                      //     result <? 10
            parg3[i] = additionResult;                  //         just stash it
            carry = 0;                                  //         no carry
        }                                               //     done
        else if (additionResult >= 10) {                // else, if result >= 10
            carry = 1;                                  //     we gotta carry 1,
            parg3[i] = (additionResult % 10);           //     put leftover here
        }                                               //     done 
    }                                                   // done 

    for (int i = 0; i < len3 - 1; i++) {                // print results
        if (i == 0 && parg3[i] == 0) {                  //
            continue;                                   //
        }                                               //
        printf("%d", parg3[i]);                         //
    }                                                   //
    printf("\n");                                       //

    return 0;
}
