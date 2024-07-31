def union_arrays(arr1, arr2):
    # Create a set to store the union of the two arrays (sets automatically handle duplicates)
    result_set = set(arr1).union(arr2)
    
    # Convert the set back to a list (optional, for ordered output)
    result_list = list(result_set)
    
    return result_list

# Input arrays
arr1 = [1, 2, 3, 4, 5]
arr2 = [4, 5, 6, 7, 8]

# Find the union of the two arrays
union_result = union_arrays(arr1, arr2)

# Print the result
print("Union of the two arrays:", union_result)
