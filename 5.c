#include <stdio.h>

// function to perform bitwise AND
int bitwiseAnd(int x, int y)
{
    return x & y;
}

// function to perform bitwise OR
int bitwiseOr(int x, int y)
{
    return x | y;
}

// function to perform bitwise XOR
int bitwiseXor(int x, int y)
{
    return x ^ y;
}

// function to perform bitwise NOT
int bitwiseNot(int x)
{
    return ~x;
}

int main()
{
    int x, y;
    
    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);
    
    printf("%d & %d = %d\n", x, y, bitwiseAnd(x, y));
    printf("%d | %d = %d\n", x, y, bitwiseOr(x, y));
    printf("%d ^ %d = %d\n", x, y, bitwiseXor(x, y));
    printf("~%d = %d\n", x, bitwiseNot(x));
    
    return 0;
}

