def convert(num): 
    if num==1:
        return 1
    else:
        return (num % 2 + 10 * convert(num // 2)) 
print(convert(int(input())))
