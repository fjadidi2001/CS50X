def apply_twice(func, arg):
    return func(func(arg))

def add_five(x):
    return x + 5

print(apply_twice(add_five, 10))

"""
The apply_twice function you've defined takes two arguments:
a function (func) and an argument (arg).
It applies the given function twice to the argument and returns the result.

you have the add_five function, which takes an argument x and returns x + 5.
You then call apply_twice with add_five and 10 as arguments.

First call to apply_twice(add_five, 10):

func is add_five.
arg is 10.
It calculates add_five(10), which is 10 + 5, resulting in 15.
Second call to apply_twice(add_five, 15):

Now, func is still add_five.
arg is the result of the previous call, which is 15.
It calculates add_five(15), which is 15 + 5, resulting in 20.
So, the final output of print(apply_twice(add_five, 10)) is 20.
The apply_twice function applied the add_five function twice to the initial argument 10, resulting in 20.


"""


