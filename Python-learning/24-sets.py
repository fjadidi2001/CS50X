num_set = {1, 2, 3, 4, 5}

print(3 in num_set)

# Sets cannot contain duplicate elements.

letters = {"a", "b", "c", "d"}
if "e" not in letters:
  print(1)
else: 
  print(2)



nums = {1, 2, 1, 3, 1, 4, 5, 6}
print(nums)
nums.add(-7)
nums.remove(3)
print(nums)