#include <stdlib.h>
#include <strings.h>
#include <stdio.h>
#include <time.h>

int spin();

// Main function does nothing at the moment
int main() {
    printf("This is a test for \"Wheel of Random\"\n");
    spin();
    return 0;
}

// Spin() will randomly choose an option provided
int spin() {

    // Call variables
    char choice1[25];
    char choice2[25];

    // Request choice
    printf("Let's start deciding!\n");

    printf("Enter choice one: ");
    fgets(choice1, sizeof(choice1), stdin);

    printf("Enter choice two: ");
    fgets(choice2, sizeof(choice2), stdin);

    printf("Choice one is %s and choice two is %s", choice1, choice2);
    return 0;
}

// nill