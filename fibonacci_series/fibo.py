n = int(input())

n = n + 1

a = 0
b = 1

for i in range(1, n):
    
    print(f"{a}")
    sum = a + b
    a = b
    b = sum
