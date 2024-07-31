def intersection_arrays(arr1, arr2):
    # Convert both arrays to sets to find the intersection
    set1 = set(arr1)
    set2 = set(arr2)
    
    # Find the intersection of the two sets
    intersection = list(set1 & set2)
    
    return intersection

# Input arrays
arr1 = [1, 2, 3, 4, 5, 4, 2]
arr2 = [4, 5, 6, 7, 8, 4, 3]

# Find the intersection of the two arrays
intersection_result = intersection_arrays(arr1, arr2)

# Print the result
print("Intersection of the two arrays:", intersection_result)
