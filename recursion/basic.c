#include <stdio.h>

int factorial(int n)
{
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
        return 1;
    
    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        int result = factorial(num);
        printf("Factorial of %d is %d\n", num, result);
    }
    
    return 0;
}
