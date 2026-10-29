class Car {
    
    String brand;
    int speed;

    public void setDetails(String carBrand, int carSpeed) {
        brand = carBrand;
        speed = carSpeed;
    }

    
    public int getSpeed() {
        return speed;
    }

    public void accelerate(int increment) {
        speed += increment;
        System.out.println(brand + " accelerated by " + increment + " km/h.");
    }

    public void displayStatus() {
        System.out.println(brand + " is currently traveling at " + speed + " km/h.");
    }
}

public class Main3 {
    public static void main(String[] args) {
       
        Car myCar = new Car();

        
        myCar.setDetails("Toyota", 60);

        
        myCar.displayStatus();

        
        myCar.accelerate(30);

        
        int currentSpeed = myCar.getSpeed();
        System.out.println("Verified Speed via getter: " + currentSpeed + " km/h.");

       
        myCar.displayStatus();
    }
}