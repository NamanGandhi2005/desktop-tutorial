#include <stdio.h>
#include <math.h>

int main()
{
    int num, numOfDigits, i;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    numOfDigits = floor(log10(num) + 1);
    
    // display all digits
    printf("%d\n", num);
    
    // display all except first digit
    for (i = 1; i < numOfDigits; i++) {
        num /= 10;
        printf("%d\n", num);
    }
    
    return 0;
}
