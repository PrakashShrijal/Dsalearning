// Base class
class Vehicle {
    void start() { // Non-final method
        System.out.println("Vehicle is starting");
    }
}

// Derived class
class Car extends Vehicle {
    @Override
    void start() { // Overriding the non-final method
        System.out.println("Car is starting");
    }
}

// Another derived class
class Bike extends Vehicle {
    @Override
    void start() { // Overriding the non-final method
        System.out.println("Bike is starting");
    }
}

// Main class to demonstrate polymorphism
class Main {
    public static void main(String[] args) {
        Vehicle myVehicle; // Declare a Vehicle reference

        myVehicle = new Car(); // Vehicle reference but Car object
        myVehicle.start(); // Calls Car's start() method

        myVehicle = new Bike(); // Vehicle reference but Bike object
        myVehicle.start(); // Calls Bike's start() method
    }
}