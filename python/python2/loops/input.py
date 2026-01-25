#keep asking the user input until they enter a number between 1 and 10.
flag = True
# while flag == True :
#     num = int(input("Enter the Number :"))
#     if num in range(1,11) :
#         flag = False

while True :
    number = int(input("Enter value b/w 1 and 10 :"))
    if 1 <= number <= 10:
        print("Thanks")
        break
    else :
        print("Invalid number, try again ")