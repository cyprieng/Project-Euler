#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long i = 1, j = 1, triangle = 0, divisors = 0;

    while(divisors < 500){
        triangle += i;
        divisors = 0;
        for(j=1;j<=sqrt(triangle);j++){
            if(triangle%j == 0) divisors+=2;
        }

        i++;
    }

    printf("The first triangle number to have over five hundred divisors is: %ld", triangle);
    return 0;
}
