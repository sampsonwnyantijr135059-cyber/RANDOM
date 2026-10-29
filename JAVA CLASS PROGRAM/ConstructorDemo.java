class Car {
    // Instance variables (fields)
    private String brand;
    private String model;
    private int year;

    // 1. Default / No-Argument Constructor
    // Called when an object is created without any arguments
    public Car() {
        System.out.println("Default constructor called.");
        this.brand = "Unknown Brand";
        this.model = "Unknown Model";
        this.year = 2026; // Setting a default year
    }

    // 2. Parameterized Constructor
    // Called when an object is created with specific initial values
    public Car(String brand, String model, int year) {
        System.out.println("Parameterized constructor called.");
        // 'this' keyword resolves ambiguity between fields and parameters
        this.brand = brand;
        this.model = model;
        this.year = year;
    }

    // Method to display car details
    public void displayDetails() {
        System.out.println("Car Info: " + year + " " + brand + " " + model);
        System.out.println("-----------------------------------");
    }
}

// Main class to execute and test the constructors
public class ConstructorDemo {
    public static void main(String[] args) {
        System.out.println("--- Instantiating Car Objects ---\n");

        // Creating an object using the Default Constructor
        Car defaultCar = new Car();
        defaultCar.displayDetails();

        // Creating an object using the Parameterized Constructor
        Car dreamCar = new Car("Tesla", "Model S", 2025);
        dreamCar.displayDetails();
    }
}