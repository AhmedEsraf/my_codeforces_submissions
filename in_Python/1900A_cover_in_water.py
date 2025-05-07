t = int(input())
for i in range(t):
    num = int(input())
    lol = str(input())
    min = 0;
    
    for _ in range(2,num):
        if lol[_-2] == '.' and lol[_-1] == '.' and lol[_] == '.':
            min = 2;
            
    if min < 2:
        for  _ in range(num):
            if lol[_] == '.':
                min = min + 1
    print(min)