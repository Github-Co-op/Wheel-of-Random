#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Hello

int main() {
    printf("Hello world, this is a test.\n");
    return 0;
}

void testing() {
    char test1[50];

    fgets(test1, sizeof(test1), stdin);
    printf("\n%s\n", test1);
}