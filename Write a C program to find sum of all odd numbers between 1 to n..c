#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers between 1 to %d is: %d\n", n, sum);

    return 0;
}

