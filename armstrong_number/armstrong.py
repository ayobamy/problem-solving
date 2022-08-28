num = int(input())

arm = 0
temp = num
while (num > 0):
    mod = num % 10
    arm += mod ** 3     # pow(mod, 3)
    
    num = num // 10

if (temp == arm):
    print(f"{temp} is an notArmstrong number")
else:
    print(f"{temp} is not an Armstrong number")
