#include <stdio.h>

int main() {
    int n, sum = 0;

    // Taking user input
    // printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Summing the first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Displaying the result
    printf("%d\n", sum);

    return 0;
}