#include <stdio.h>

// Recursive function to calculate e^x using Taylor Series
double taylorSeries(int n, double x) {
    static double power = 1;  // holds x^n
    static double fact = 1;   // holds n!

    double result;

    if (n == 0)
        return 1;

    result = taylorSeries(n - 1, x);  // Recursive call

    power = power * x;     // Update x^n
    fact = fact * n;       // Update n!

    return result + (power / fact);   // Add current term to result
}

int main() {
    int terms;
    double x;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &terms);

    double result = taylorSeries(terms, x);

    printf("e^%.2f using Taylor Series with %d terms is: %.10f\n", x, terms, result);

    return 0;
}
