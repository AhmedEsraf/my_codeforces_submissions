t = int(input())
for _ in range(t):
    board = []
    for p in range(8):
        temp = str(input())
        board.append(temp)
    for row in range(8):
        count = 0
        ind = 0
        for col in range(8):
            if board[row][col] == '#':
                count+=1
                ind = col
        if (count == 1 and row > 0 and row < 7 and ind > 0 and ind < 7):
            if board[row-1][ind-1] == '#' and board[row-1][ind+1] == '#' and board[row+1][ind-1] == '#' and board[row+1][ind+1] == '#':
                print(f"{row+1} {ind+1}")
                break