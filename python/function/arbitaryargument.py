def AddAllNumber(*args) :
    sum = 0
    for i in args :
        sum += i
    return sum
    
def studentinfo(**kwargs) :
    for x,y in kwargs.items():
        print(x,"is",y)

output = AddAllNumber(5,6,7,4)
print(output)
studentinfo(name="prakash",city="pakistan")
studentinfo(name = "aman",city  ="chennai")