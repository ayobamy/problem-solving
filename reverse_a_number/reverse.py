num = int(input())

# num = int(num[::-1])
# print(f"{num}")

rev = 0
while (num > 0):
    mod = num % 10
    rev = (rev * 10) + mod
    num //= 10

print(f"{rev}")
