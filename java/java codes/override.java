class Vehicle {
    int tireSize;
    int engineSize;
    int lights;
    String companyName;

       public void show() {
        System.out.println("Vehicle ka show");
    }
}

class Bike extends Vehicle {
    int handleSize;

        @Override
    public void show() {
        System.out.println("Bike ka show");
    }
}

class C extends Bike {
       @Override
    public void show() {
        super.show();
        Vehicle vehicle = new Vehicle();
        vehicle.show();     }
}
class Main {
    public static void main(String[] args) {
        Vehicle a;

        a = new Bike();
        a.show(); 

        a = new Vehicle();
        a.show(); 
        System.out.println();

        a = new C();
        a.show(); 

    }
}