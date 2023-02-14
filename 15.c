#include <stdio.h>

void merge(int a[], int m, int b[], int n, int c[]) {
    int i, j, k;
    i = j = k = 0;

    while (i < m && j < n) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < n) {
        c[k] = b[j];
        j++;
        k++;
    }
}

int main() {
    int a[100], b[100], c[200];
    int m, n, i;

    printf("Enter number of elements in array A: ");
    scanf("%d", &m);
    printf("Enter the elements of array A: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in array B: ");
    scanf("%d", &n);
    printf("Enter the elements of array B: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    merge(a, m, b, n, c);

    printf("Merged array C: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
