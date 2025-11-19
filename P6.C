#include <stdio.h>

int main() {
    int number;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is greater than 100
    if (number > 100) {
        printf("The number %d is greater than 100.\n", number);
    } else {
        printf("The number %d is not greater than 100.\n", number);
    }

    return 0;
}
