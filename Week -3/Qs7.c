#include <stdio.h>

// Structure to represent a complex number
typedef struct {
    float real;
    float imag;
} Complex;

// Function to read a complex number
void readComplex(Complex *c) {
    printf("Enter the real part: ");
    scanf("%f", &c->real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c->imag);
}

// Function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiplyComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

// Function to print a complex number
void printComplex(Complex c) {
    if (c.imag >= 0) {
        printf("%.2f + %.2fi\n", c.real, c.imag);
    } else {
        printf("%.2f - %.2fi\n", c.real, -c.imag);
    }
}

int main() {
    Complex num1, num2, result;

    // Read two complex numbers
    printf("Enter the first complex number:\n");
    readComplex(&num1);
    printf("Enter the second complex number:\n");
    readComplex(&num2);

    // Add the two complex numbers
    result = addComplex(num1, num2);
    printf("Sum: ");
    printComplex(result);

    // Subtract the two complex numbers
    result = subtractComplex(num1, num2);
    printf("Difference: ");
    printComplex(result);

    // Multiply the two complex numbers
    result = multiplyComplex(num1, num2);
    printf("Product: ");
    printComplex(result);

    return 0;
}
