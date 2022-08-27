a = int(input())
b = int(input())

print("Before swap:\t a = {:d}, b = {:d}".format(a, b))

tmp = a
a = b
b = tmp

print("After swap:\t a = {:d}, b = {:d}".format(a, b))
