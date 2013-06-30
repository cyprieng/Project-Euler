#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 0, b = 1, c = 0, sum = 0;

    while(c < 4000000){
        c = a + b;

        if(c%2 == 0) sum += c;

        a = b;
        b = c;
    }

    printf("Sum of the even Fibonacci numbers < 4 000 000: %d", sum);

    return 0;
}