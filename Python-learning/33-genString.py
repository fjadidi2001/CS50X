def make_word():
    word = ""
    for i in "fateme":
        word += i
        yield word
print(list(make_word()))