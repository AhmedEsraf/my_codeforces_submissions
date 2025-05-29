t = int(input())  # Read number of test cases
for _ in range(t):
    board = []
    for _ in range(8):
        board.append(input())  # Read each row of the chessboard

    for row in range(1, 7):  # Check rows between 2 and 7 (0-based indices)
        for col in range(1, 7):  # Check columns between 2 and 7 (0-based indices)
            if board[row][col] == '#':  # If the current cell is attacked
                # Check all four diagonals around this position
                if board[row-1][col-1] == '#' and \
                   board[row-1][col+1] == '#' and \
                   board[row+1][col-1] == '#' and \
                   board[row+1][col+1] == '#':
                    # The bishop is at the position (row, col)
                    print(row + 1, col + 1)  # Convert to 1-based index
                    break
