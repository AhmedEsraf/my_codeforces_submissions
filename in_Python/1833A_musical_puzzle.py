t = int(input())
for _ in range(t):
    num = int(input())
    arr = str(input())
    
    left = 0
    right = 1
    unique = set()
    for i in range(num-1):
        temp = arr[left] + arr[right]
        unique.add(temp)
        left+=1
        right+=1
    print(len(unique))       