t = int(input())
for i in range(t):
    num = int(input())
    arr = list(map(int,input().split()))
    for x in arr:
        diff = num - x;
        print(diff+1,end=" ")
    print()