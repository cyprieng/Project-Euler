#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0, testNumber = 20, number = 0, divisible = 1;

    while(number == 0){
        divisible = 1;
        for(i=11;i<=20 && divisible;i++){
            if(testNumber % i != 0) divisible = 0;
        }

        if(divisible){
            number = testNumber;
        }
        testNumber+=2;
    }

    printf("The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: %d", number);
    return 0;
}
