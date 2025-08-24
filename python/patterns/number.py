# x = int(input("Enetr the nummber in rows :"))
# for i in range(x) :
#     for j in range(1,x+1) :
#         print(j, end="") 
#     print()    


# y = int(input("Enetr the nummber in rows :"))
# for i in range(y+1) :
#     for j in range(1,i+1) :
#         print(j,end="")
#     print()   


z = int(input("Enetr the nummber in rows :"))
a = input("Enter the character :")
for i in range(z+1) :
    for j in range(1,i+1) :
        print(chr(ord(a)+j-1),end="")
    print()    