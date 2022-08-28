num = int(input())

sum = 0
while (num > 0):
    mod = num % 10
    sum = sum + mod
    num //= 10
    
print(f"The sum is {sum}")
