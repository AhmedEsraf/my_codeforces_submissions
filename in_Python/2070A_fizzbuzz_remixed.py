t = int(input())
for i in range(t):
    num = int(input())
    
    count = 0
    
    if (num <= 2):
        count = count + num + 1
    elif (num > 2 ):
        count = count + 3
    diff = int(num/15)
    if (diff > 0):
        count = count + (diff-1)*3
        if (num >= diff*15):
            count+=1
        if (num >= (diff*15)+1):
            count+=1
        if (num >= (diff*15)+1):
            count+=1
    print(count)