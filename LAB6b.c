#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, result;

    printf("Enter the Number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        result = factorial(n);
        printf("Result = %d\n", result);
    }

    return 0;
}
