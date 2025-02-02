#include <stdio.h>
#include <math.h>

int main() {
    int binary = 1101;  // This is a decimal representation, not actual binary
    double power = 0;
    int des = 0;

    while (binary != 0) {
        int lastDigit = binary % 10;  // Extract the last digit
        des = des + lastDigit * pow(2.0, power);  // Multiply by power of 2
        power++;
        binary = binary / 10;  // Remove the last digit
    }

    printf("%d\n", des);
    return 0;
}
