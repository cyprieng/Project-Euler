#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getDigit(int number, int digittNumber){
    int i = 0, digit = 0;
    for(i=0;i<digittNumber;i++){
        digit = number % 10;
        number /= 10;
    }
    return digit;
}

int main(){
    int n1 = 0, n2 = 0, testNumber = 0, palindromicNumber = 0, length = 0, i = 0, palindromic = 0;

    for(n1 = 999; n1 > 99; n1--){
        for(n2 = 999; n2 > 99; n2--){
            testNumber = n1 * n2;
            length = floor(log10(abs(testNumber))) + 1;

            palindromic = 1;
            for(i=1;i<=length/2 && palindromic;i++){
                if(getDigit(testNumber, i) != getDigit(testNumber, length-i+1)) palindromic = 0;
            }

            if(palindromic && testNumber > palindromicNumber){
                palindromicNumber = testNumber;
            }
        }
    }

    printf("The largest palindrome made from the product of two 3-digit numbers is: %d", palindromicNumber);
    return 0;
}
