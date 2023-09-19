def cookie_jar():
    yield "Chocolate chip"
    yield "Oatmeal raisin"
    yield "Peanut butter"

# Let's get cookies one at a time!
jar = cookie_jar()

print(next(jar))  # Prints "Chocolate chip"
print(next(jar))  # Prints "Oatmeal raisin"
print(next(jar))  # Prints "Peanut butter"
