def reverse_string(s, start, end):
    if start >= end:
        return s

    # Convert the string to a list to swap elements
    s_list = list(s)
    s_list[start], s_list[end] = s_list[end], s_list[start]

    # Recursively call the function with next indices
    return reverse_string("".join(s_list), start + 1, end - 1)

# Main part of the program
if __name__ == "__main__":
    s = "Hello, World!"
    print("Original string:", s)
    
    reversed_s = reverse_string(s, 0, len(s) - 1)
    print("Reversed string:", reversed_s)

# OUTPUT
# Original string: Hello, World!
# Reversed string: !dlroW ,olleH