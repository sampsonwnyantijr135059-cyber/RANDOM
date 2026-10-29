class Car {
    String model;
    int speed;

    // Constructor to initialize the Car object
    Car(String model, int speed) {
        this.model = model;
        this.speed = speed;
    }

    // Method to display car details
    void displayDetails() {
        System.out.println("Car: " + model + " | Speed: " + speed + " km/h");
    }
}

// Main class to demonstrate passing objects to methods
public class ObjectPassingDemo {

    // 1. Method that accepts an object and modifies its internal state
    public static void upgradeEngine(Car carObj) {
        // Modifying the object's attribute inside the method
        carObj.speed += 30; 
        System.out.println("\n[Inside Method] Upgraded the engine of " + carObj.model);
    }

    // 2. Method that accepts two objects and compares them
    public static boolean hasSameSpeed(Car c1, Car c2) {
        return c1.speed == c2.speed;
    }

    public static void main(String[] args) {
        // Create two distinct Car objects
        Car sportsCar = new Car("Ferrari", 300);
        Car sedan = new Car("Honda Civic", 180);

        System.out.println("--- Initial State ---");
        sportsCar.displayDetails();
        sedan.displayDetails();

        // Pass the sportsCar object to the upgradeEngine method
        upgradeEngine(sportsCar);

        System.out.println("\n--- State After Method Execution ---");
        // The change made inside the method is visible here because the reference was passed
        sportsCar.displayDetails(); 

        // Create another car to test comparison
        Car tuningCar = new Car("Toyota Supra", 330);
        System.out.println("\n--- Comparing Objects ---");
        System.out.println("Does " + sportsCar.model + " match speed with " + tuningCar.model + "?");
        
        // Pass two objects into the comparison method
        if (hasSameSpeed(sportsCar, tuningCar)) {
            System.out.println("Result: Yes, they have the same speed!");
        } else {
            System.out.println("Result: No, their speeds are different.");
        }
    }
}