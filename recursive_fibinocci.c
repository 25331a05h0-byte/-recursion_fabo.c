#include<stdio.h>

int fib(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}

int main()
{
    int i, n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}