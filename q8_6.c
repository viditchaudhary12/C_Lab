#include <stdio.h>

int main()
{
    int n, i, j;
    double x, sum = 0, power, factorial, term;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        power = 1;
        factorial = 1;

        
        for (j = 1; j <= i; j++)
        {
            power = power * x;
        }

        
        for (j = 1; j <= i; j++)
        {
            factorial = factorial * j;
        }

        term = power / factorial;

        
        if (i % 2 == 0)
        {
            sum = sum - term;
        }
        else
        {
            sum = sum + term;
        }
    }

    printf("Sum of the series = %.4lf\n", sum);

    return 0;
}