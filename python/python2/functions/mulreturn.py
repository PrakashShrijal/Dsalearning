import math

x = int(input("Enter the radius of circle :"))


def fun(x):
    area = (x**2)*math.pi
    circum = 2*x*math.pi
    return area, circum
                

area, circumference = fun(x)
print("Area of circle :" , round(area,3))
print("Circumference of circle is :",circumference )

