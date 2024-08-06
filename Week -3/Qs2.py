def compute_gcd(a, b):
    # Base case: if b is 0, the GCD is a
    if b == 0:
        return a
    # Recursive case: call compute_gcd with b and a % b
    return compute_gcd(b, a % b)

# Example usage
num1 = 56
num2 = 98
print(f"The GCD of {num1} and {num2} is: {compute_gcd(num1, num2)}")
# OUTPUT
# The GCD of 56 and 98 is: 14