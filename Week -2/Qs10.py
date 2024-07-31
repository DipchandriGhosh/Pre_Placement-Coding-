word = input("Enter a word: ")
word = word.lower()
is_palindrome = (word == word[::-1])
if is_palindrome:
    print("The word is a palindrome.")
else:
    print("The word is not a palindrome.")
