cubes = [i**3 for i in range(5)]

print(cubes)


evens=[i**2 for i in range(10) if i**2 % 2 == 0]

print(evens)

word = input()
vowels = "a", "e", "i", "o", "u"

out = [ print(str(i)) for i in range(len(word)) if vowels in word]