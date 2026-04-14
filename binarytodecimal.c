#include <stdio.h>

int main() {
    int b, d = 0, base = 1, r;

    printf("Enter a binary number: ");
    scanf("%d", &b);

    while(b != 0) {
        r = b % 10;       
        d = d + r * base;
        b = b / 10;        
        base = base * 2;   
    }

    printf("Decimal number = %d", d);

    return 0;
}