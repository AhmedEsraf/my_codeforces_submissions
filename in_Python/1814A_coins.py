t = int(input())
for i in range(t):
    num,k = map(int,input().split())
    if num % 2 == 1 and k % 2 == 0:
        print("NO")
    elif num % 2 == 0:
        print("YES")
    elif num == k:
        print("YES")
    elif num % 2 == 1 and k % 2 == 1:
        print("YES")