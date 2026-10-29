// Define a Car class to serve as a blueprint
class Car {
    // Attributes (Variables) representing the object's state
    String brand;
    int speed;

    // Method 1: A void method that performs an action but returns no value
    public void startEngine() {
        System.out.println("The engine of the " + brand + " has started.");
    }

    // Method 2: A method that accepts parameters and updates state
    public void accelerate(int speedIncrease) {
        speed = speed = speed + speedIncrease;
        System.out.println("The car accelerated by " + speedIncrease + " km/h.");
    }

    // Method 3: A method that returns a value (int) to the caller
    public int getCurrentSpeed() {
        return speed;
    }
}

// Main class containing the program's entry point
public class Main{
    public static void main(String[] args) {
        // Create an object (instance) of the Car class
        Car myCar = new Car();

        // Assign values to the object's attributes
        myCar.brand = "Toyota";
        myCar.speed = 60;

        // Call the methods using the object
        myCar.startEngine();
        myCar.accelerate(30);

        // Call the return-type method and store the result
        int currentSpeed = myCar.getCurrentSpeed();
        System.out.println("Current Speed: " + currentSpeed + " km/h.");
    }
}