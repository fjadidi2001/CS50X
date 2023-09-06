# Defining function
def bmi(weight, height):
  index = weight / (height * height)
  return index  #sends the return value back

# Calling function and using return value
patient_5 = bmi(61, 1.83) #stores return value
print("underweight:", patient_5 < 18.5)

# Another call
patient_7 = bmi(75, 1.74)
print("underweight:", patient_7 < 18.5)


# ====================================================


# taking the weight as input
weight = int(input())

# complete the function
def shipping_cost(weight):
    index = weight * 5
    print(index)

     

# function call
shipping_cost(weight)


# ==================================================
def rect(length, width):
  area = length * width
  perimeter = 2 * length + 2 * width
  return area, perimeter #2 values

x, y = rect(50, 100) #2 variables
print(x, y)