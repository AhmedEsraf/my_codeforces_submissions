t = int(input())

for _ in range(t):
    shelves_num, brand_num = map(int, input().split())

    bottles = []
    for i in range(brand_num):
        row = list(map(int, input().split()))
        bottles.append(row)

    merged = {}
    for x, y in bottles:
        if x not in merged:
            merged[x] = 0
        merged[x] += y

    bottles = list(merged.values())

    bottles.sort(reverse=True)

    cost = 0
    if shelves_num >= len(bottles):
        cost = sum(bottles)
    else:
        for i in range(shelves_num):
            cost += bottles[i]

    print(cost)
    
        
    
            