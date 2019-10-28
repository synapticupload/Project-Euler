// 
// https://projecteuler.net/problem=9
// 
// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// 
// a^2 + b^2 = c^2
// For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
// 
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.
// 

// 

#include <stdio.h>
#include <math.h> 

// pow(double x, double y) 
// sqrt(double x)

int main(void) {
    
    double c = 0;

    for (double a = 0; a < 1000; a++) {
        for (double b = a; b < 1000; b++) {
            c = sqrt(pow(a, 2) + pow(b, 2));
            if (((a + b + c) == 1000) && a < b && b < c) {
                printf("a = %.2lf, b = %.2lf, c = %.2lf\n", a, b, c);
                printf("product = %.2lf\n", a * b * c);
            }
        }
    }
        
    return 0;
}
