n = int(input())


for i in range(n):
    text = str(input())
    if (len(text) > 10):
        print (text[0] + str(len(text)-2) + text[-1], end=" ")
    else:
        print(text)