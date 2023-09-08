contacts = [
    ('James', 42),
    ('Amy', 24),
    ('John', 31),
    ('Amanda', 63),
    ('Bob', 18)
]
name = input ()
for x in contacts:
    if name in x:
        print (str (x[0]) + " is " + str (x[1]))
        break
if name not in x:
    print ("Not Found")