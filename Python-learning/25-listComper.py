cubes = [i**3 for i in range(5)]

print(cubes)


evens=[i**2 for i in range(10) if i**2 % 2 == 0]

print(evens)

word = input()
word = list(word)
vowels = ["a", "e", "i", "o", "u"]

out = [i for i in word if not i in vowels]

print(out)