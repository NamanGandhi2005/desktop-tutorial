#include <stdio.h>

int main() {
    int i, j;

    // upper half of the pattern
    for (i = 1; i <= 3; i++) {
        // print the spaces before the numbers
        for (j = 3; j > i; j--) {
            printf(" ");
        }

        // print the first half of the numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // print the second half of the numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        // print a new line
        printf("\n");
    }

    // lower half of the pattern
    for (i = 2; i >= 1; i--) {
        // print the spaces before the numbers
        for (j = 3; j >= i; j--) {
            printf(" ");
        }

        // print the first half of the numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // print the second half of the numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        // print a new line
        printf("\n");
    }

    return 0;
}
