n, k = map(int, input().split())
count = 0

for _ in range(n):
    number = input().strip()
    digits_in_number = set(number)
    
    good = True
    for i in range(k + 1):
        if str(i) not in digits_in_number:
            good = False
            break

    if good:
        count += 1

print(count)
