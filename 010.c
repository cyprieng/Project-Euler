#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    unsigned long long i = 0, j = 0, sum = 2, prime = 1, countPrime = 0;
    unsigned long long primeNumber[1500] = {0};

    for(i=3;i<2000000;i+=2){
        j=0;
        prime = 1;
        while(prime && j < countPrime && primeNumber[j] <= sqrt(i)){
            if(i%primeNumber[j] == 0) prime = 0;
            j++;
        }

        if(prime){
            if(countPrime < 1500){
                primeNumber[countPrime] = i;
                countPrime++;
            }
            sum += i;
        }
    }

    printf("The sum of all the primes below two million is: %llu", sum);
    return 0;
}
