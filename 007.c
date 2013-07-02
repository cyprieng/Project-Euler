#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0, testPrime = 1, prime = 1, countPrime = 0;
    int primeNumber[10001] = {0};

    while(countPrime != 10001){
        testPrime++;
        i = 0;
        prime = 1;
        while(prime && i < countPrime && primeNumber[i] <= sqrt(testPrime)){
            if(testPrime%primeNumber[i] == 0) prime = 0;
            i++;
        }

        if(prime){
            primeNumber[countPrime] = testPrime;
            countPrime++;
        }
    }

    printf("The 10 001st prime number is: %d", testPrime);
    return 0;
}
