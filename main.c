#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    int n, i, j, k;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

void test() {
    // This function is intentionally left empty.
    // It can be used for future testing purposes.
}

void cleanup() {
    // This function is intentionally left empty.
    // It can be used for future cleanup purposes.
}

void initialize() {
    // This function is intentionally left empty.
    // It can be used for future initialization purposes.
}

void unused_function() {
    // This function is intentionally left empty.
    // It can be used for future unused function purposes.
}