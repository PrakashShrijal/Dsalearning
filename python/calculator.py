x = int(input("Enetr the  first nummber :"))
y = int(input("Enter the second number :"))
operator = input("Enter the  operator ")

match operator:
    case "+" :
        print("sum is ", x + y)
    case "-" :
        print("minus is ",x-y)
    case "*" :
        print("product  is :", x * y)
    case "/" :
        print("Quotient is :",x/y)
    case "%" :
        print("Remainder is :", x % y)
    case _ :
        print("Enter the valid operator")                    

