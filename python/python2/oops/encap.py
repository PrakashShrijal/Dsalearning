class Car:
    def __init__(self, brand,model):
        self.__brand = brand
        self.model = model
    def get_brand(self):
        return self.__brand +"!"
    

my_car = Car("Toyota", "Corolla")
# print(my_car.brand)
print(my_car.get_brand())