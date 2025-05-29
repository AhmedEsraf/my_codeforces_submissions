num1 = str(input())
num2 = str(input())

num1 = num1.upper()
num2 = num2.upper()
size = len(num1)


for i in range(size) :
    if num1[i] < num2[i]:
        print(-1)
        exit()
    elif num1[i] > num2[i]:
        print(1)
        exit()
print(0)