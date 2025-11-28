#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14f;
    double c = 9.81;
    char d = 'A';

    printf("Address of a: %p, Size: %zu\n", (void*)&a, sizeof(a));
    printf("Address of b: %p, Size: %zu\n", (void*)&b, sizeof(b));
    printf("Address of c: %p, Size: %zu\n", (void*)&c, sizeof(c));
    printf("Address of d: %p, Size: %zu\n", (void*)&d, sizeof(d));

    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of float: %zu\n", sizeof(float));
    printf("Size of double: %zu\n", sizeof(double));
    printf("Size of char: %zu\n", sizeof(char));

    return 0;
}
