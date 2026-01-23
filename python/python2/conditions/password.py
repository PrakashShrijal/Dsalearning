password = input("Enter the Password :")
if len(password) > 9 :
    print("strong password" )
elif len(password) >= 6 :
    print("Medium ")
else :
    print("Weak Password")