class Car:
    def __init__(self, brand,model):
        self.brand = brand
        self.model = model

    def full_name(self):
        return f"{self.brand} {self.model}"
    
    def fuel_type(self):
        return "petrol or diesel"
    

    @staticmethod
    def general_description():
        return "Car are means of transport"

    # inheritance 
class ElectricCar(Car):
    def __init__(self, brand, model, battery_size):
        super().__init__(brand, model,)
        self.battery_size = battery_size

    def fuel_type(self):
        return "Electric charge"
    

my_tesla = ElectricCar("tesla", "Model s", "85KWh")
print(my_tesla.full_name())
# my_car = Car("Toyota", "Corolla")
# print(my_car.brand)
# print(my_car.model)
# print(my_car.full_name())
# print(isinstance(my_tesla,Car))
# print(isinstance(my_tesla,ElectricCar))
print(Car.general_description())

