#include <stdio.h>
#include <stdlib.h>

int arithmeticSum(int r, int maxN){
    return r*(maxN / r)*((maxN / r) + 1)/2;
}

int main(){
    int sum = arithmeticSum(3, 999) + arithmeticSum(5, 999) - arithmeticSum(15, 999);

    printf("Sum of all natural numbers below 1000 that are multiples of 3 or 5 is: %d", sum);
    return 0;
}
