def factorial(n):
    """Calculate the factorial of a number."""
    if n == 0 or n == 1:
        return 1
    fact = 1
    for i in range(2, n + 1):
        fact *= i
    return fact

def combination(n, r):
    """Calculate the binomial coefficient nCr."""
    return factorial(n) // (factorial(r) * factorial(n - r))

def print_pascals_triangle(rows):
    """Print Pascal's Triangle with the given number of rows."""
    for i in range(rows):
        # Print leading spaces
        print(' ' * (rows - i - 1), end='')
        # Print numbers in the row
        for j in range(i + 1):
            print(combination(i, j), end=' ')
        print()

# Taking input for the number of rows
rows = int(input("Enter the number of rows for Pascal's Triangle: "))

# Printing Pascal's Triangle
print_pascals_triangle(rows)
