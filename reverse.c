#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for printing later
    int originalNum = num; 

    // Loop until the number becomes 0
    while (num != 0) {
        remainder = num % 10;          // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Append the digit to reversedNum
        num /= 10;                    // Remove the last digit from num
    }

    printf("Original number: %d\n", originalNum);
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
