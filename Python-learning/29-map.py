def add_five(x):
    return x + 5

nums = [11, 22, 33, 44, 55]
result1 = list(map(add_five, nums))
print(result1)


nums = [11, 22, 33, 44, 55]

result2 = list(map(lambda x: x+5, nums))
print(result2)