def countdown():
  i = 5
  while i > 0:
    yield i # it can be used in a for loop.
    i -= 1
    
for i in countdown():
  print(i)


def numbers(x):
  for i in range(x):
    if i % 2 == 0:
      yield i

print(list(numbers(11)))