// simposon 1/3 rules

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
    printf("enter the value of segment: ");
    scanf("%d", &n);
    h = (xn - x0) / n;

    sum = f(x0) + f(xn);
    for ( i = 1; i < n; i++)
    {
        if (i%2==0)
        {
            sum = sum + 2 * f(x0 + i * h);
        }
        else{
            sum = sum + 4 * f(x0 + i * h);
        }
        
    }
    
    x1 = x0 + h;
 
    v = h / 3 * sum;
    printf("The Value of integration is %f", v);
    return 0;
}