def rect(d1, d2):
  area = 0
  return area
  #End of function execution
  area = d1 * d2 #Not executed

x = rect(50, 50)
print(x)

# Python allows function arguments to have default values. If the function is called without the argument, the argument gets its default value


def greet(name="Guest"):
  print("Welcome", name)

greet() # Welcome Guest
greet("John") # Welcome John
