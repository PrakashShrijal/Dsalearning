def print_kargs(**kwargs):
    for key, value in kwargs.items():
        print(f"{key} : {value}")


print_kargs(name="shaktiman", power="lazer")
print_kargs(name="shaktiman")
print_kargs(name="shaktiman", power="lazer")