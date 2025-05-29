t = int(input())
for _ in range(t):
    num,target = map(int,input().split())
    arr = list(map(int,input().split()))
    if target in arr:
        print("YES")
    else:
        print("NO")