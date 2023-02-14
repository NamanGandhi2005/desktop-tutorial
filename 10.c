#include <stdio.h>

int main()
{
    char name[20];
    int level;
    float basic_salary, hra, perks, gross_salary, tax, net_salary;
    
    printf("Enter employee name: ");
    scanf("%s", name);
    printf("Enter employee level (1-4): ");
    scanf("%d", &level);
    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);
    
    switch (level) {
        case 1:
            perks = 7000 + 3000;
            if (basic_salary >= 40000 && basic_salary <= 60000) {
                tax = 0.10 * basic_salary;
            } else {
                printf("Invalid basic salary for level 1\n");
                return 0;
            }
            break;
        case 2:
            perks = 6000 + 2000;
            if (basic_salary >= 30000 && basic_salary <= 40000) {
                tax = 0.08 * basic_salary;
            } else {
                printf("Invalid basic salary for level 2\n");
                return 0;
            }
            break;
        case 3:
            perks = 5000 + 1500;
            if (basic_salary >= 20000 && basic_salary <= 30000) {
                tax = 0.05 * basic_salary;
            } else {
                printf("Invalid basic salary for level 3\n");
                return 0;
            }
            break;
        case 4:
            perks = 5000 + 1500;
            if (basic_salary >= 15000 && basic_salary <= 20000) {
                tax = 0.0;
            } else {
                printf("Invalid basic salary for level 4\n");
                return 0;
            }
            break;
        default:
            printf("Invalid level\n");
            return 0;
    }
    
    hra = 0.25 * basic_salary;
    gross_salary = basic_salary + perks + hra;
    net_salary = gross_salary - tax;
    
    printf("\nEmployee Name: %s\n", name);
    printf("Level: %d\n", level);
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("Perks: %.2f\n", perks);
    printf("HRA: %.2f\n", hra);
    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Tax: %.2f\n", tax);
    printf("Net Salary: %.2f\n", net_salary);
    
    return 0;
}
