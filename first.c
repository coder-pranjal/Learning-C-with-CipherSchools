#include <stdio.h>

int main() {
    int binary;
    printf("Enter binary: ");
    scanf("%d",&binary);
    int decimal = 0;
    int base = 1; // Represents the current power of 2

    while (binary != 0) {
        int digit = binary % 10;
        decimal = decimal + (digit * base);
        base = base * 2; // Update the power of 2
	//you can use num*2**power=num<<2
        binary = binary / 10;
    }

    printf("Decimal: %d\n", decimal);

    return 0;
}