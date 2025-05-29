t = int(input())
for _ in range(t):
    a, b, c, d = map(int, input().split())

    if b > d:
        print(-1)
        continue

    vert = d - b  
    a += vert    

    if c > a:
        print(-1)
    else:
        print(vert + (a - c))
