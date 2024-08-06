class Complex:
    def __init__(self, real=0.0, imag=0.0):
        self.real = real
        self.imag = imag

    def __add__(self, other):
        return Complex(self.real + other.real, self.imag + other.imag)

    def __sub__(self, other):
        return Complex(self.real - other.real, self.imag - other.imag)

    def __mul__(self, other):
        real_part = self.real * other.real - self.imag * other.imag
        imag_part = self.real * other.imag + self.imag * other.real
        return Complex(real_part, imag_part)

    def __str__(self):
        if self.imag >= 0:
            return f"{self.real:.2f} + {self.imag:.2f}i"
        else:
            return f"{self.real:.2f} - {-self.imag:.2f}i"

def read_complex():
    real = float(input("Enter the real part: "))
    imag = float(input("Enter the imaginary part: "))
    return Complex(real, imag)

def main():
    print("Enter the first complex number:")
    num1 = read_complex()
    print("Enter the second complex number:")
    num2 = read_complex()

    # Addition
    result = num1 + num2
    print(f"Sum: {result}")

    # Subtraction
    result = num1 - num2
    print(f"Difference: {result}")

    # Multiplication
    result = num1 * num2
    print(f"Product: {result}")

if __name__ == "__main__":
    main()
