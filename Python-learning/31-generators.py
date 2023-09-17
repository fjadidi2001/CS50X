def countdown():
  i = 5
  while i > 0:
    yield i # it can be used in a for loop.
    i -= 1
    
for i in countdown():
  print(i)



def get_primes():
  num = 2
  while True:
    if is_prime(num):
      yield num
    num += 1