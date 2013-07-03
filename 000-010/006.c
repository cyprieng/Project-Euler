#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 1, sum1 = 0, sum2 = 0;

    for(i=1;i<=100;i++){
        sum1 += i*i;
        sum2 += i;
    }

    sum2*= sum2;

    printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: %d", sum2-sum1);
    return 0;
}
