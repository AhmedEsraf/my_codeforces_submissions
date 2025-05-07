num = int(input());
initial = 0

for i in range(num):
    op = str(input())
    
    if op[0] == '-' or op[2] == '-' or op[2] == '-' :
        initial = initial - 1
    elif op[0] == '+' or op[2] == '+' or op[2] == '+' :
        initial = initial + 1 
print(initial)    