// simposon 1/2

#include <stdio.h>
#include <conio.h>
#include <math.h>

float f(float x)
{
    return pow(x, 3) + 2;
}

int main()
{
    float x0, xn, x1, h, sum, v;
    int n, i;
    printf("enter the value of lower and upper limit: ");
    scanf("%f %f", &x0, &xn);
    n = 2;
    h = (xn - x0) / n;
    x1 = x0 + h;
    sum = f(x0) + 4 * f(x1) + f(xn);
    v = h / 3 * sum;
    printf("The Value pf ontegration is %f", v);
    return 0;
}