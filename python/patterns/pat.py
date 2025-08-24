x = int(input("Enter the number :"))
for i in range(x+1):
    print(" " * (x-i),end="")

    for j in range(1,2*i) :
        print(j,end="")
    print()    