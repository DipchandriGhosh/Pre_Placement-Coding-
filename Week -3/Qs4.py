def convert_to_base(decimal, base):
    if base < 2 or base > 36:
        return None

    base_chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

    if decimal == 0:
        return "0"

    result = ""
    while decimal > 0:
        result = base_chars[decimal % base] + result
        decimal //= base

    return result

# Example usage
decimal = 255
base = 16
result = convert_to_base(decimal, base)

if result:
    print(f"The number {decimal} in base {base} is: {result}")
else:
    print("Invalid base.")

# OUTPUT
# The number 255 in base 16 is: FF