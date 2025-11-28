#include <stdio.h>
int main() {
    int mark;
    printf("Enter mark: ");
    scanf("%d", &mark);
    if (mark > 45) {
        if (mark > 80)
            printf("Pass with 'O' grade\n");
        else
            printf("Pass with 'A' grade\n");
    } else
        printf("Fail\n");
    return 0;
}
