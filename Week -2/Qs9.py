sentence = input("Enter a sentence: ")
sentence = sentence.lower()
vowels = 'aeiou'
vowel_count = sum(1 for char in sentence if char in vowels)
print(f"Number of vowels in the sentence: {vowel_count}")
