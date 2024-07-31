n = int(input("Enter number of elements in the array: "))
arr = []
print(f"Enter {n} elements: ")
for i in range(n):
    element = int(input())
    arr.append(element)
max_value = min_value = arr[0]
max_pos = min_pos = 0  # Positions are 0-based initially
for i in range(1, n):
    if arr[i] > max_value:
        max_value = arr[i]
        max_pos = i
    if arr[i] < min_value:
        min_value = arr[i]
        min_pos = i
print(f"Maximum number: {max_value}")
print(f"Position of maximum number: {max_pos + 1}")  # Convert to 1-based index
print(f"Minimum number: {min_value}")
print(f"Position of minimum number: {min_pos + 1}")  # Convert to 1-based index
