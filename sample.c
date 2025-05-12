#include <stdio.h>

int main() {
    int n, i, j;

    // Ask user for the number of rows in the diamond
    printf("Enter the number of rows (for half of the diamond): ");
    scanf("%d", &n);

    // Upper part of diamond
    for (i = 1; i <= n; i++) {
        // Printing spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Printing stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
         for (i = n - 1; i >= 1; i--) {
        // Printing spaces
        for (j = n; j > i; j--) {
            printf(" ");
        }
        // Printing stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
         }
    return 0;
}
