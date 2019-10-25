#include <stdio.h>

int main(void) {
    unsigned long num1 = 0;
    unsigned long num2 = 1;
    unsigned long num3 = 0; 
    unsigned long sum = 0;

    for (int i = 0; num3 < 4000000; i++) {
        num3 = num1 + num2;
        if ((num3 % 2) == 0) {
            sum += num3;
        }
        num1 = num2;
        num2 = num3;
    }

    printf("%lu\n", sum);
    return 0; 
}
