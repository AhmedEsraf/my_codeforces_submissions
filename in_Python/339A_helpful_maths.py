str = str(input())

size = len(str)
half_size = int(size/2)

str = ''.join(sorted(str))

str = str[half_size:]

n = 1
for i in range(half_size):
    str = str[:n] + '+' + str[n:]
    n=n+2
    
print(str) 
    
