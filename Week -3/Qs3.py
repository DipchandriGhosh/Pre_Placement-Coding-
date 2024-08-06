def print_largest_word(line):
    words = line.split()
    largest_word = ""
    
    for word in words:
        if len(word) > len(largest_word):
            largest_word = word
            
    print(f"The largest word is: {largest_word}")

# Example usage
line = "This is an example sentence to find the largest word."
print_largest_word(line)

# OUTPUT
# The largest word is: sentence