my_tuple = (1, 2, 3, 4, 5)
slice_tuple = my_tuple[1:4]

print(slice_tuple)


my_tuple = (1, 2, 3, 4, 5)
slice_from_beginning = my_tuple[:3]  # Start from the beginning up to index 3 (exclusive)
slice_to_end = my_tuple[2:]        # Start from index 2 (inclusive) to the end

print(slice_from_beginning)  # Output: (1, 2, 3)
print(slice_to_end)          # Output: (3, 4, 5)
