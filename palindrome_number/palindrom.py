num = int(input())

temp = num
result = 0

while (num > 0):
    mod = num % 10
    result = (result * 10) + mod
    num = num // 10

if (result == temp):
    print("Palindrome")
else:
    print("Not Palindrome")

# # ALTERNATIVE
# num = input()
# result = num[::-1]
# if (int(result) == int(num)):
#     print("Palindrome")
# else:
#     print("Not Palindrome")
    