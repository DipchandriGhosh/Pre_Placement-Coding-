n = int(input("Enter number of elements in the array: "))
arr = []
print(f"Enter {n} elements: ")
for i in range(n):
    element = int(input())
    arr.append(element)
pos = int(input(f"Enter the position of the element to delete (1 to {n}): "))
if pos < 1 or pos > n:
    print(f"Invalid position! Please enter a position between 1 and {n}")
else:
    arr.pop(pos - 1)
    print("Array after deletion: ")
    for element in arr:
        print(element, end=" ")
    print()
