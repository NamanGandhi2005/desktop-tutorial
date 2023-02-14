#include <stdio.h>

int main()
{
    float investment, interestRate, interest;
    int years = 10;
    
    printf("Enter investment amount: ");
    scanf("%f", &investment);
    
    interestRate = 0.0775;
    interest = investment * interestRate * years;
    investment += interest;
    
    printf("After %d years, the cumulative return on investment is %.2f\n", years, investment);
    
    return 0;
}
