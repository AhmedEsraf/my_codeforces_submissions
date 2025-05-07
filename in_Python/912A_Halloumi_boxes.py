t = int(input())
for i in range(t):
    num,max = map(int,input().split())
    arr = list(map(int,input().split()))
    
    status = 1
    for i in range(1,num):
        if arr[i] < arr[i-1]:
            status = 0
            break
    if status == 1:
        print("YES")
    elif max >= 2:
        print("YES")
    else:
        print("NO")