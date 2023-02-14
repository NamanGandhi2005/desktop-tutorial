#include <stdio.h>
#include <string.h>

// Define the structure for an employee address
typedef struct {
    int street_no;
    char city[50];
    char district[50];
    char state[50];
} Address;

// Define the structure for an employee
typedef struct {
    char name[50];
    int mobile;
    int age;
    char degree[50];
    float exp;
    Address address;
} Employee;

// Define the array to store the employees
Employee employees[20];

// Function to input the details of an employee
void inputEmployeeDetails(Employee* emp) {
    printf("Enter employee name: ");
    scanf("%s", emp->name);

    printf("Enter employee mobile number: ");
    scanf("%d", &emp->mobile);

    printf("Enter employee age: ");
    scanf("%d", &emp->age);

    printf("Enter employee degree: ");
    scanf("%s", emp->degree);

    printf("Enter employee experience: ");
    scanf("%f", &emp->exp);

    printf("Enter employee address (street no, city, district, state): ");
    scanf("%d %s %s %s", &emp->address.street_no, emp->address.city, emp->address.district, emp->address.state);
}

// Function to retrieve the details of an employee based on the mobile number
void getEmployeeDetails(int mobile) {
    int found = 0;

    for (int i = 0; i < 20; i++) {
        if (employees[i].mobile == mobile) {
            printf("Employee details:\n");
            printf("Name: %s\n", employees[i].name);
            printf("Mobile number: %d\n", employees[i].mobile);
            printf("Age: %d\n", employees[i].age);
            printf("Degree: %s\n", employees[i].degree);
            printf("Experience: %f\n", employees[i].exp);
            printf("Address: %d, %s, %s, %s\n", employees[i].address.street_no, employees[i].address.city, employees[i].address.district, employees[i].address.state);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee with mobile number %d not found\n", mobile);
    }
}

// Main function
int main() {
    int choice;

    do {
        printf("1. Input employee details\n");
        printf("2. Retrieve employee details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Input employee details
                for (int i = 0; i < 20; i++) {
                    if (employees[i].mobile == 0) {
                        inputEmployeeDetails(&employees[i]);
                        break;
                    }
                }
                break;
            case 2:
                // Retrieve employee details based on mobile number
                int mobile;
                printf("Enter mobile number: ");
                scanf("%d", &mobile);
                getEmployeeDetails(mobile);
                break;
            case 3:
                // Exit the program
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }

        printf("\n");
    } while (choice != 3);

    return 0;
}
