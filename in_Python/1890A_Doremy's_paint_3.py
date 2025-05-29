from collections import Counter

t = int(input())
for _ in range(t):
    num = int(input())
    array = list(map(int,input().split()))
    
    unique = set(array)
    freq = Counter(array)
    
    if len(unique) == 1:
        print("YES")
    elif len(unique) == 2:
        not_possible = False
        for key,count in freq.items():
            if (count < int(num/2)):
                not_possible = True;
        if not_possible == True:
            print("NO")
        else:
            print("YES")
    else:
        print("NO")