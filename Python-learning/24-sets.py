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

# The len() function can be used to return the number of elements of a set.

first = {1, 2, 3, 4, 5, 6}
second = {4, 5, 6, 7, 8, 9}

print(first | second)
print(first & second)
print(first - second)
print(second - first)
print(first ^ second)

skills = {'Python', 'HTML', 'SQL', 'C++', 'Java', 'Scala'}
job_skills = {'HTML', 'CSS', 'JS', 'C#', 'NodeJS'}
print(*(skills & job_skills))

a = {1, 2, 3}
b = {0, 3, 4, 5}
print(a & b)