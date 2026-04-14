#include <stdio.h>

int main() {
    int d, b = 0, base = 1, r;

    printf("Enter a decimal number: ");
    scanf("%d", &d);

    while(d != 0) {
        r = d % 2;         
        b = b + r * base;  
        d = d / 2;         
        base = base * 10;  
    }

    printf("Binary number = %d", b);

    return 0;
}