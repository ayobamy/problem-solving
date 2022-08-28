num = int(input())

rev = 0
while (num > 0):
    mod = num % 10
    rev = (rev * 10) + mod
    num //= 10
    
print(f"{rev}")