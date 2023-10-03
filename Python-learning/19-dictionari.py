car = {
    'brand':'BMW',
    'year': 2018,
    'color': 'red',
    'mileage': 15000
}
sus = input()
if sus == "brand":
    print(car['brand'])
elif sus == "year":
    print(car['year'])
elif sus == "color":
    print(car['color'])
elif sus == "mileage":
    print(car['mileage'])
else :
    print("be hummbele")


# other way

car = {
    'brand':'BMW',
    'year': 2018,
    'color': 'red',
    'mileage': 15000
}
choice = input()
print(car[choice])