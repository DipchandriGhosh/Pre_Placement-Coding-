def string_length(src):
    length = 0

    # Traverse the string until the end
    for char in src:
        length += 1

    return length

# Example usage
my_string = "Hello, world!"
print(f"The length of the string is: {string_length(my_string)}")

# OUTPUT
# The length of the string is: 13