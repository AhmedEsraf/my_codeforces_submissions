t = int(input())
for i in range(t):
    num = int(input())
    array = list(map(int,input().split()))
    for i in range(num):
        for j in range(2,num-i):
            if (array[j-1] > array[j] and array[j-1] > array[j-2]):
                temp = array[j-1]
                array[j-1] = array[j]
                array[j] = temp
    if array == sorted(array):
        print("YES")
    else:
        print("NO")