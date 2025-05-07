t = int(input())
for _ in range(t):
    s = sorted(list(input()))
    ans = ''
    need = 9
    while need >= 0:
        for i in range(len(s)):
            if int(s[i]) >= need:
                ans += s[i]
                s.pop(i)
                break
        need -= 1
    print(ans)

