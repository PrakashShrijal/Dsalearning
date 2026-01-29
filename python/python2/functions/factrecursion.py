def fact(n):
    if n == 0:
        return 1
    else : 
        return n * fact(n-1)
    

x = int(input("Enter the number :"))
result = fact(x)
print(result)