#include <stdio.h>

int main() {
    int m; // number of Fibonacci numbers to calculate
    int a = 1; // first Fibonacci number
    int b = 1; // second Fibonacci number
    
    printf("Enter the number of Fibonacci numbers to calculate: ");
    scanf("%d", &m);
    
    printf("The first %d Fibonacci numbers are: %d %d ", m, a, b); // print the first two numbers
    
    int i = 2; // index of the current Fibonacci number
    do {
        int c = a + b; // calculate the next Fibonacci number
        printf("%d ", c);
        a = b; // update the values of a and b
        b = c;
        i++; // increment the index
    } while (i < m); // loop until we've printed m numbers
    
    return 0;
}
