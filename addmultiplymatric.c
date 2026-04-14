#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter order of matrix (n): ");
    scanf("%d", &n);

    int A[n][n], B[n][n], sum[n][n], mul[n][n];

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            mul[i][j] = 0;
            for(k = 0; k < n; k++) {
                mul[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    printf("Sum of matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication of matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}