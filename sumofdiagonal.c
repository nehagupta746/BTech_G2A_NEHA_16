#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int arr[m][n];

    printf("Enter elements:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    if(m == n) {
        for(i = 0; i < m; i++) {
            sum = sum + arr[i][i];  
        }
        printf("Sum of diagonal elements = %d", sum);
    } else {
        printf("Diagonal sum not possible (not square matrix)");
    }

    return 0;
}