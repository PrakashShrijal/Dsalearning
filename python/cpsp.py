cost = int(input("Enter the cost price :"))
sell = int(input("Enter the selling price :"))
if cost > sell :
    print("Loss occured of :", cost - sell)
elif  sell > cost :
    print("profit  occured of :", sell - cost)
else :
    print("Neither profit nor Loss")    
