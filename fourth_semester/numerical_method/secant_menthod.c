//secant method

#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
    return x * x - 4 * x - 10;
}
int main()
{
    float x1, x2, x3, err = 0.001;
    int i;
    printf("enter the initial guess: ");
    scanf("%f %f", &x1, &x2);
    i = 1;
    do
    {
        x3 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
        x1 = x2;
        x2 = x3;
        printf("\nIteration\t %d \t%d", i, x3);
        i++;
    } while (fabs(f(x3)) > err);
    printf("\n\nThe root id %f", x3);
    return 0;
}