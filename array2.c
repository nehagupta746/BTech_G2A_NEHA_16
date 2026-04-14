#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], b[n], c[n];

    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }

    printf("Sum array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}