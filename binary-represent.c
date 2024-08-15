// Call a Libray : 'STDIO.h'
#include <stdio.h>

// Function to convert an integer to binary and return the bit at index y
int check_bit(int x, int y) {
    // Shift the bits of x right by y positions and check the least significant bit
    return (x >> y) & 1;
}

int main() {
    int x, y;
    
    // Taking input from the user
    printf("Enter an integer x: ");
    scanf("%d", &x);
    
    printf("Enter the index y: ");
    scanf("%d", &y);

    // Calculate the binary representation
    int bit = check_bit(x, y);
    
    // Display the binary representation (for visualization)
    printf("Binary representation of %d is: ", x);
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
    }
    printf("\n");

    // Output the result
    printf("Bit at index %d is %d.\n", y, bit);

    return 0;
}

