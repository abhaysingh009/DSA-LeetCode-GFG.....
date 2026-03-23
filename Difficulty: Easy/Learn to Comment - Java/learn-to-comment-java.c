#include <stdio.h>

void printNumbers(int a, int b, int c) {
    // Prints a
    printf("%d\n", a);
    // Prints b
    // printf("%d\n", b);
    // Prints c
    printf("%d\n", c);
}

void execute() {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        fprintf(stderr, "Error reading input\n");
        return;
    }
    printNumbers(a, b, c);
}
