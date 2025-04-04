#include <stdio.h>
#include <math.h>

double f(double x)
{
    return x * x * x + 2;
}

int main()
{
    double a, b, h, trapez;

    printf("Enter the lower limit (a): ");
    scanf("%lf", &a);
    printf("Enter the upper limit (b): ");
    scanf("%lf", &b);

    // calculate f(a),f(b)
    double fa = f(a);
    double fb = f(b);

    h = b - a;
    trapez = h / 2 * (f(a) + f(b));
    printf("\nf(a): %lf", fa);
    printf("\nf(b): %lf", fb);

    printf("\n\nThe final Value of Trapezodial is: %lf", trapez);
    return 0;
}
