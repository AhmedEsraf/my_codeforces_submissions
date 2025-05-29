num = int(input())
arr = list(map(int,input().split()))
minimal = abs(arr[0])
for i in range(1,num):
    if minimal > abs(arr[i]):
        minimal = abs(arr[i])
print(minimal)