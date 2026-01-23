age = int(input("Enter the age :"))
day = input("Enter the Day : ").lower()

price = 12 if age > 17 else 8

if day == "wednesday" :
    price -= 2
print("The final Movie Ticket price is :", price)