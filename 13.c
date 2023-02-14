#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sinx;
    int i, sign;
    
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    
    sinx = term = sign = i = 0;
    
    do {
        term = sign * pow(x, 2*i+1) / tgamma(2*i+2); // calculate the ith term of the series
        sinx += term; // add the ith term to the sum
        sign = -sign; // alternate the sign of the next term
        i++; // increment the index
    } while (fabs(term/sinx) >= 0.000001); // loop until the ith term is less than 0.0001% of the sum
    
    printf("sin(%lf) = %lf", x, sinx);
    
    return 0;
}
