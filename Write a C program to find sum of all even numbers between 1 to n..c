#include <stdio.h>

int main() {
    int n,sum = 0;
    printf("Enter the value  of n: ");
    scanf("%d", &n);
    for (int i=2;i<=n; i+=2) {
        sum += i;
    }
  printf("Sum of even numbers between 1 to %d is: %d\n", n, sum);165

    return 0;
}

