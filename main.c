#include <stdio.h>
#include "biggest.h"
#include "factorial.h"

int main() {
    int x = 6, y = 2;
    int num = 5;

    printf("Biggest of %d and %d is %d\n", x, y, biggest(x, y));
    printf("Factorial of %d is %ld\n", num, factorial(num));

    return 0;
}

