def reverse_words_in_string(s):
    # Split the string into words
    words = s.split()
    
    # Reverse each word and collect them in a list
    reversed_words = [word[::-1] for word in words]
    
    # Join the reversed words back into a single string
    reversed_string = ' '.join(reversed_words)
    
    return reversed_string

# Example usage
input_string = "C Programming Class"
output_string = reverse_words_in_string(input_string)
print(f"Original string: {input_string}")
print(f"Reversed words string: {output_string}")

# OUTPUT
# Original string: C Programming Class
# Reversed words string: C gnimmargorP ssalC