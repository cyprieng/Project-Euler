#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0, sum = 0;

    for(i=1;i<1000;i++){
        if(i%3 == 0 || i%5 == 0) sum += i;
    }

    printf("Sum of all natural numbers below 1000 that are multiples of 3 or 5 is: %d", sum);

    return 0;
}