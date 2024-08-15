#include <stdio.h>

int main() {
    int z, x, y;

    // Taking input from the user
    printf("Enter the value of z: ");
    scanf("%d", &z);
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    printf("Enter the value of y: ");
    scanf("%d", &y);

    // Perform the bitwise operation z &= ~(x << y)
    z &= ~(x << y);

    // Display the result
    printf("The result after performing z &= ~(x << y) is: %d\n", z);

    return 0;
}

