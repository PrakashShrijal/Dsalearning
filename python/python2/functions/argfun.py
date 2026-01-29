#function with variable input and return their sum_all
def sum_all(*args):    # use of args * is important
    print(args)
    for i in args:
        print(i*2)
    return sum(args)

print(sum_all(1,2,3,4))
# print(sum_all(1,39,48,89))
# print(sum_all(23,90,56,34,66,87))