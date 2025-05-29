num = int(input())
count = 0;

for i in range(num):
    a,b,c = map(int,input().split())
    if (a+b+c) > 1:
        count=count+1
print(count)
    