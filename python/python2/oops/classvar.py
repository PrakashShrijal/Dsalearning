class Car:
    total_car = 0
    def __init__(self, brand,model):
        self.brand = brand
        self.model = model
        Car.total_car +=1

    def full_name(self):
        return f"{self.brand} {self.model}"
    # inheritance 
class ElectricCar(Car):
    def __init__(self, brand, model, battery_size):
        super().__init__(brand, model,)
        self.battery_size = battery_size


my_tesla = ElectricCar("tesla", "Model s", "85KWh")
print(my_tesla.full_name())
my_car = Car("Toyota", "Corolla")

print(Car.total_car)