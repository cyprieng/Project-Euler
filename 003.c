#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    unsigned long long n = 600851475143, i = sqrt(n), j = 0;
    int prime = 0;

    for(i=sqrt(n);i>0;i--){
        if(n%i == 0){
            j=2;
            prime = 1;
            while(prime && j < sqrt(i)){
                if(i%j == 0) prime = 0;
                j++;
            }

            if(prime){
                printf("The largest prime factor of the number %llu is: %llu", n, i);
                return 0;
            }
        }
    }

    return 0;
}
