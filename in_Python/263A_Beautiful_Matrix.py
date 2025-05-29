row = 0
col = 0

steps = 0
Matrix = []

for i in range(5):
    list_row = list(map(int,input().split()))
    Matrix.append(list_row)
    for j in range(5):
        if Matrix[i][j] == 1:
            row= i + 1
            col = j + 1
            
if col > 3:
    while col != 3:
        col = col -1;
        steps= steps + 1
elif col < 3:
    while col != 3:
        col = col +1;
        steps= steps + 1
        
if row > 3:
    while row  != 3:
        row  = row  -1;
        steps= steps + 1
elif row < 3:
    while row  != 3:
        row  = row  +1;
        steps= steps + 1
    
print(steps)



