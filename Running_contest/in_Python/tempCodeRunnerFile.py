t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    if max(a) - min(a) > k:
        print("Jerry")
    else:
        total_apples = sum(a)
        if total_apples % 2 == 1:
            print("Tom")
        else:
            print("Jerry")
