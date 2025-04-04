#include <stdio.h>
#include <conio.h>
#include <math.h>

float f(float x)
{
    return pow(x, 3) + 2;
}
int main()
{
    float x0, xn, h, sum, v;
    int i, n;
    printf("enter the value of lower and upper limit: ");
    scanf("%f %f", &x0, &xn);
    printf("enter the number of segment");
    h = xn - x0;
    sum = f(x0) + f(xn);
    for (i = 0; i < n; i++)
    {
        sum = sum + 2 * f(x0 + i * h);
    }

    v = h / 3 * sum;
    printf("the value of inregration is %f", v);
    return 0;
}