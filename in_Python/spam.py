import sys

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1
    for _ in range(t):
        n, k = int(data[idx]), int(data[idx+1])
        idx += 2
        a = list(map(int, data[idx:idx+n]))
        idx += n
        current_max = max(a)
        current_min = min(a)
        if current_max - current_min > k:
            # Compute second_max and second_min
            second_max = -float('inf')
            for num in a:
                if num < current_max:
                    if num > second_max:
                        second_max = num
            if second_max == -float('inf'):
                second_max = current_max - 1  # all elements are current_max
            
            second_min = float('inf')
            for num in a:
                if num > current_min:
                    if num < second_min:
                        second_min = num
            if second_min == float('inf'):
                second_min = current_min + 1  # all elements are current_min
            
            count_max = a.count(current_max)
            count_min = a.count(current_min)
            
            valid_move = False
            for i in range(n):
                ai = a[i]
                # Compute new_max
                if ai == current_max:
                    if count_max > 1:
                        new_max = current_max
                    else:
                        new_max = max(current_max - 1, second_max)
                else:
                    new_max = current_max
                # Compute new_min
                if ai == current_min:
                    if count_min > 1:
                        new_min = current_min
                    else:
                        new_min = min(current_min + 1, second_min)
                else:
                    new_min = current_min
                if new_max - new_min <= k:
                    valid_move = True
                    break
            if not valid_move:
                print("Jerry")
            else:
                sum_total = sum(a)
                if sum_total % 2 == 1:
                    print("Tom")
                else:
                    print("Jerry")
        else:
            sum_total = sum(a)
            if sum_total % 2 == 1:
                print("Tom")
            else:
                print("Jerry")

if __name__ == "__main__":
    main()
