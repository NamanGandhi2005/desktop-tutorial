#include <stdio.h>
#define PI 3.14159265

int main() {
    float radius, perimeter, area, volume;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    perimeter = 2 * PI * radius;
    area = PI * radius * radius;
    volume = 4.0 / 3.0 * PI * radius * radius * radius;

    printf("Perimeter of circle = %.2f\n", perimeter);
    printf("Area of circle = %.2f\n", area);
    printf("Volume of sphere = %.2f\n", volume);

    return 0;
}
