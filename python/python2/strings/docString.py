def add(a, b):
    """ We  are adding the Two Numbers !"""
    return a+b

x = int(input("Enter the first Nuber :"))
y = int(input("Enter the Second Number :"))

print(add(x,y))

help(add)
print(add.__doc__)