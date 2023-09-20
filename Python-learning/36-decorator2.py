def fancy_decorator(func):
    def wrapper():
        print("Frosting the cake...")
        func()
        print("Adding sprinkles...")
    return wrapper

@fancy_decorator
def plain_cake():
    print("Baking a plain cake")

# Now, let's call the decorated cake
plain_cake()
