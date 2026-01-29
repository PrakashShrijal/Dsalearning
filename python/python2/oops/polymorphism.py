class Car:
    def __init__(self, brand,model):
        self.brand = brand
        self.model = model

    def full_name(self):
        return f"{self.brand} {self.model}"
    
    def fuel_type(self):
        return "petrol or diesel"
    

    
    # inheritance 
class ElectricCar(Car):
    def __init__(self, brand, model, battery_size):
        super().__init__(brand, model,)
        self.battery_size = battery_size
    def fuel_type(self):
        return "Electric charge"
    
my_car = Car("TATA", "Nexon")
my_tesla = ElectricCar("Tesla", "Model S", "85KWh")
print(my_tesla.fuel_type())
print(my_car.fuel_type())

