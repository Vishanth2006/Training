#include <stdio.h>

int main() {
    int favorite_number;

    // Print a message to the console
    printf("Hello! C is working perfectly.\n");
    
    // Ask the user for input
    printf("Enter your favorite number: ");
    scanf("%d", &favorite_number);
    
    // Print the result back
    printf("Awesome! Your favorite number is %d.\n", favorite_number);

    return 0;
}