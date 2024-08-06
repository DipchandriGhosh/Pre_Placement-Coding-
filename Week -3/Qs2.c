#include <stdio.h>

int ComputeGCD(int a, int b) {
    // Base case: if b is 0, the GCD is a
    if (b == 0) {
        return a;
    }
    // Recursive case: call ComputeGCD with b and a % b
    return ComputeGCD(b, a % b);
}

int main() {
    int num1 = 56;
    int num2 = 98;
    printf("The GCD of %d and %d is: %d\n", num1, num2, ComputeGCD(num1, num2));
    return 0;
}
// OUTPUT
// The GCD of 56 and 98 is: 14