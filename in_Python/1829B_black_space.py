t = int(input())
for i in range(t):
    num = int(input())
    arr = list(map(int,input().split()))
    max_blank = 0;
    for _ in range(num):
        count = 0;
        for b in range(_,num):
            if arr[b] == 0:
                count+=1
                max_blank = max(count,max_blank)
            else:
                break
    print(max_blank)