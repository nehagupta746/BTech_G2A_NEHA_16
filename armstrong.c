#include <stdio.h>
#include <math.h>

int main() {
    int i, num, digit;
    double sum;

    printf("Armstrong numbers from 1 to 100 are:\n");

    for(i = 1; i <= 100; i++) {
        num = i;
        sum = 0;

        while(num != 0) {
            digit = num % 10;
            sum = sum + pow(digit, 3); 
            num = num / 10;
        }

        if((int)sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}