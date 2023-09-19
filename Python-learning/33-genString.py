def make_word():
    zarf = ""
    word2 = str(input())
    for i in word2:
        zarf += i
        yield zarf
print(list(make_word()))