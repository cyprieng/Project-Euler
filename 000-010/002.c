#include <stdio.h>
#include <stdlib.h>

int main(){
    long fib3 = 2, fib6 = 0, fib = 2, sum = 0;

    while(fib < 4000000){
        sum += fib;

        fib = 4*fib3 + fib6;
        fib6 = fib3;
        fib3 = fib;
    }

    printf("Sum of the even Fibonacci numbers < 4 000 000: %ld", sum);
    return 0;
}
