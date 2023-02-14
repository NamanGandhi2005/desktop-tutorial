#include <stdio.h>

int main()
{
    int num, result;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Right shift
    result = num >> 1;
    printf("%d right shifted by 1 is %d\n", num, result);
    
    // Left shift
    result = num << 1;
    printf("%d left shifted by 1 is %d\n", num, result);
    
    return 0;
}
