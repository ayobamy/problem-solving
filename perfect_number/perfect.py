import math

n = int(input())
sum = 0

for i in range(1, n):
  mod = n % i

  if (mod == 0):
    sum += i

if (sum == n):
  print("Yes")
else:
  print("No")
  


