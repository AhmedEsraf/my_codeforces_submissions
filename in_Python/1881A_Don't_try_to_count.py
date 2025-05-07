t = int(input())
for i in range(t):
    num1,num2 = map(int,input().split())
    arr1 = str(input())
    arr2 = str(input())
    
    t= 0;
    while(True):
        if (len(arr1) > 75):
            print(-1)
            break
        
        if arr2 in arr1:
            print(t)
            break
        else:
            arr1 = arr1 + arr1
            t = t + 1

            



