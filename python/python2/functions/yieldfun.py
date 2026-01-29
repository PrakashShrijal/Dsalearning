#write a generator function thta yield even number up to a specified limit

# def even_generator(limit):
#     for i in range(2,limit + 1,2):
#         print(i)

def even_generator(limit):
    for i in range(2,limit + 1,2):
        yield i


x = int(input("Enter the number :"))
for num in even_generator(x):
    print(num)