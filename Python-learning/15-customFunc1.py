#function definition
def greet(): 
  print("Hello from a function")
  print("Have a great day")

#function call
greet() 


#function definition
def personal_greet(name): 
  print("Hello", name)
  print("Have a great day")

#function calls
personal_greet("Sarah") 
personal_greet("Henry")


#Define the function
def double(number):
    print(number*2)

#Call the function
double(6)



def bmi(weight, height):
    index = weight / (height * height)
    print(index)


bmi(57, 170)