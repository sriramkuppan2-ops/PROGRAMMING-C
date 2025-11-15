#include <stdio.h>

int main() {
    int a, b, c, sum;

    printf("Enter three numbers separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;

    printf("The sum of %d, %d, and %d is: %d\n", a, b, c, sum);

    return 0;
}
