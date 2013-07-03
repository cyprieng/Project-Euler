#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;

    for(a=0;a<=1000;a++){
        for(b=0;b<=1000;b++){
            c = 1000 - a - b;
            if(a*a + b*b == c*c && a != b && b != c){
                printf("The product abc is: %d", a*b*c);
                return 0;
            }
        }
    }

    return 0;
}
