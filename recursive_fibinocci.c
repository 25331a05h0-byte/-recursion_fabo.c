#include <stdio.h>

// Function declaration
int fibonacci(int n);

// Main function
int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));   // Calling recursive function
    }
    printf("\n");
printf(“\n               25331A05H0”);
    return 0;
}

// Recursive function to get nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
